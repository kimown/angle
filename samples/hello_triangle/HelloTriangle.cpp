//
// Copyright 2014 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

//            Based on Hello_Triangle.c from
// Book:      OpenGL(R) ES 2.0 Programming Guide
// Authors:   Aaftab Munshi, Dan Ginsburg, Dave Shreiner
// ISBN-10:   0321502795
// ISBN-13:   9780321502797
// Publisher: Addison-Wesley Professional
// URLs:      http://safari.informit.com/9780321563835
//            http://www.opengles-book.com

#include "SampleApplication.h"
#include <stdio.h>
#include "util/shader_utils.h"
#include "util/test_utils.h"
#include "/media/google/Data/com/github/angle/src/tests/test_utils/gl_raii.h"

#include "/media/google/Data/com/github/renderdoc/renderdoc/api/app/renderdoc_app.h"
#include <stddef.h>
#include <dlfcn.h>
#include <assert.h>
#include <stdio.h>
RENDERDOC_API_1_1_2 *rdoc_api = NULL;

void loadRenderDoc() {
    void* mod = dlopen("/media/google/Data/com/github/renderdoc/build/lib/librenderdoc.so", RTLD_NOW | RTLD_NOLOAD);
    if(mod == NULL)
    {
        printf("mod failed\n");
    } else{
        printf("mod ok\n");
        pRENDERDOC_GetAPI RENDERDOC_GetAPI = (pRENDERDOC_GetAPI)dlsym(mod, "RENDERDOC_GetAPI");
        int ret = RENDERDOC_GetAPI(eRENDERDOC_API_Version_1_1_2, (void **)&rdoc_api);
        printf("ret, %d\n",ret);
        assert(ret == 1);
        rdoc_api->SetCaptureFilePathTemplate("dist/example");
        printf("-----init done\n");
    }
}

void renderDocTriggerCapture() {
    if(rdoc_api){
        rdoc_api->StartFrameCapture(NULL, NULL);
        printf("renderDocTriggerCapture\n");
    } else {
        printf("rdoc_api not ready\n");
    }
}

void renderDocTriggerCaptureEnd() {
    if(rdoc_api) {
        rdoc_api->EndFrameCapture(NULL, NULL);
        printf("renderDocTriggerCaptureEnd\n");
    } else{
        printf("rdoc_api not ready\n");
    }
}

bool inited = false;

class HelloTriangleSample : public SampleApplication
{
  public:
    HelloTriangleSample(int argc, char **argv)
        : SampleApplication("HelloTriangle", argc, argv, 2, 0)
    {}

    bool initialize() override
    {
        constexpr char kVS[] = R"(attribute vec4 vPosition;
float a=1.0;
void main()
{
    float b=0.5;
    float c = a-b;
    gl_Position = vec4(vPosition.x,vPosition.y,vPosition.z, c+0.1);
})";

        constexpr char kFS[] = R"(precision mediump float;
const highp float a = 4096.5;
const int samples = 100;
   const int LOD = 2;         // gaussian done on MIPmap at scale LOD
   const int sLOD = 4; // tile size = 2^LOD;
   const float sigma = float(samples) * .25;
   const int s = samples/sLOD;
   const int ss = s*s;
   float modI(float a,float b) {
        float m=a-floor((a+0.5)/b)*b;
        return floor(m+0.5);
    }
   float gaussian(vec2 i) {
        return exp( -.5* dot(i/=sigma,i) ) / ( 6.28 * sigma*sigma );
   }
   vec4 blur1(vec2 U, vec2 scale) {
        vec4 O = vec4(0.0);
        for ( int i = 0; i < ss*1; i++ ) {
            float ccc= modI(float(i), float(s));
            vec2 d = vec2(ccc, i/s)*float(sLOD) ;
            O += gaussian(d) * vec4(1.0,1.0,1.0,1.0);
        }
       return O / O.a;
   }
   vec4 gaussianBlur(vec2 uv) {
        return blur1( vec2(0.3,0.1), vec2(0.1,0.1) );
    }

void main()
{
mat4 a = mat4(-3.702, -0.773,  -0.602, -0.602, -0.0, 2.132, -0.47, -0.469, -3.453, 0.829, 0.646, 0.646, 0.0, 0.0, 3.801, 4.0)*mat4(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.646, 0.0, 1.0);
vec4 o=gaussianBlur(vec2(0.1,0.1));
gl_FragColor = vec4(a[0][0], o.x, 0.0, 1.0);
})";

        constexpr char kComputeShader[] = R"(#version 310 es
layout(local_size_x = 1, local_size_y = 1, local_size_z = 1) in;
layout(binding = 0, std430) buffer Output {
  int value[1];
} output_data;
void main()
{
    int values[1000];
    for (int i = 0; i < values.length(); i++)
    {
        values[i] = 0;
    }
    int total = 0;
    for (int i = 0; i < values.length(); i++)
    {
        total += i;
        values[i] = total;
    }
    output_data.value[0u] = values[1000-1];
})";
        mProgramCompute = CompileComputeProgram(kComputeShader);


        mProgram = CompileProgram(kVS, kFS);


        if (!mProgram)
        {
            return false;
        }

//        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

        return true;
    }

    void destroy() override {
        glDeleteProgram(mProgram);
//            renderDocTriggerCaptureEnd();
    }

    void draw() override
    {

        angle::Sleep(100);
        if(inited) {
        } else {
//                renderDocTriggerCapture();
            inited = true;
        }


        glUseProgram(mProgram);
        {
            //        system("sleep 1");
            GLfloat vertices[] = {
                0.0f, 0.5f, 0.0f, -0.5f, -0.5f, 0.0f, 0.5f, -0.5f, 0.0f,
            };

            // Set the viewport
            glViewport(0, 0, getWindow()->getWidth(), getWindow()->getHeight());

            // Clear the color buffer
            glClear(GL_COLOR_BUFFER_BIT);

            // Use the program object
            glUseProgram(mProgram);

            // Load the vertex data
            glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, vertices);
            glEnableVertexAttribArray(0);

            glDrawArrays(GL_TRIANGLES, 0, 3);
        }



        if (getenv("stdout_alpha")) {
            glUseProgram(mProgramCompute);
            constexpr unsigned int kBytesPerComponent = sizeof(GLuint);
            angle::GLBuffer shaderStorageBuffer;
            glBindBuffer(GL_SHADER_STORAGE_BUFFER, shaderStorageBuffer);
            glBufferData(GL_SHADER_STORAGE_BUFFER, 1 * kBytesPerComponent, nullptr, GL_STATIC_DRAW);
            glBindBufferBase(GL_SHADER_STORAGE_BUFFER, 0, shaderStorageBuffer);
            glDispatchCompute(1, 1, 1);
            const GLint *ptr = reinterpret_cast<const GLint *>(
                glMapBufferRange(GL_SHADER_STORAGE_BUFFER, 0, 1 * kBytesPerComponent, GL_MAP_READ_BIT));
            int a = ptr[0];
            printf("aaa %d\n",a);
            //        EXPECT_EQ(499500, );

        }
    }

  private:
    GLuint mProgram;
    GLuint mProgramCompute;
};

int main(int argc, char **argv)
{
//        loadRenderDoc();
    HelloTriangleSample app(argc, argv);
    return app.run();
}
