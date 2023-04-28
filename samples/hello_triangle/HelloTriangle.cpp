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

#include "util/shader_utils.h"

class HelloTriangleSample : public SampleApplication
{
  public:
    HelloTriangleSample(int argc, char **argv)
        : SampleApplication("HelloTriangle", argc, argv, 2, 0)
    {}

    bool initialize() override
    {
        constexpr char kVS[] = R"(attribute vec4 vPosition;
void main()
{
    gl_Position = vPosition;
})";

        constexpr char kFS[] = R"(precision mediump float;
const int samples = 3300;
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

        mProgram = CompileProgram(kVS, kFS);
        if (!mProgram)
        {
            return false;
        }

        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

        return true;
    }

    void destroy() override { glDeleteProgram(mProgram); }

    void draw() override
    {
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

  private:
    GLuint mProgram;
};

int main(int argc, char **argv)
{
    HelloTriangleSample app(argc, argv);
    return app.run();
}
