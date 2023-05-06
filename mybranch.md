./out/Debug/angle_unittests --gtest_filter=*oggle*



google@h:/media/google/Data/com/github/angle$ ./out/Debug/angle_shader_translator
Usage: translate [-i -o -u -l -b=e -b=g -b=h9 -x=i -x=d] file1 file2 ...
Where: filename : filename ending in .frag or .vert
-i       : print intermediate tree
-o       : print translated code
-u       : print active attribs, uniforms, varyings and program outputs
-s=e2    : use GLES2 spec (this is by default)
-s=e3    : use GLES3 spec
-s=e31   : use GLES31 spec (in development)
-s=w     : use WebGL 1.0 spec
-s=wn    : use WebGL 1.0 spec with no highp support in fragment shaders
-s=w2    : use WebGL 2.0 spec
-s=d     : use Desktop Core spec (in development)
-s=dc    : use Desktop Compatibility spec (in development)
-b=e     : output GLSL ES code (this is by default)
-b=g     : output GLSL code (compatibility profile)
-b=g[NUM]: output GLSL code (NUM can be 130, 140, 150, 330, 400, 410, 420, 430, 440, 450)
-b=v     : output Vulkan SPIR-V code
-b=h9    : output HLSL9 code
-b=h11   : output HLSL11 code
-x=i     : enable GL_OES_EGL_image_external
-x=d     : enable GL_OES_EGL_standard_derivatives
-x=r     : enable ARB_texture_rectangle
-x=b[NUM]: enable EXT_blend_func_extended (NUM default 1)
-x=w[NUM]: enable EXT_draw_buffers (NUM default 1)
-x=g     : enable EXT_frag_depth
-x=l     : enable EXT_shader_texture_lod
-x=f     : enable EXT_shader_framebuffer_fetch
-x=n     : enable NV_shader_framebuffer_fetch
-x=a     : enable ARM_shader_framebuffer_fetch
-x=m     : enable OVR_multiview
-x=y     : enable YUV_target
-x=s     : enable OES_sample_variables


./out/Debug/angle_shader_translator -o  a.frag
``` a.frag
uniform mediump float u;
void main()
{
    const highp float a = 4096.5;
    mediump float b = fract(a + u);
    gl_FragColor = vec4(b);
}
```

```
#### BEGIN COMPILER 0 INFO LOG ####

#### END COMPILER 0 INFO LOG ####


#### BEGIN COMPILER 0 OBJ CODE ####
uniform mediump float u;
void main(){
  const mediump float sc02 = 4096.5;
  mediump float b = fract((sc02 + u));
  (gl_FragColor = vec4(b));
}

#### END COMPILER 0 OBJ CODE ####

```
./out/Debug/angle_shader_translator -o -s=w2 a.frag



#/media/google/Data/com/github/angle/tools/glslang/glslang_validator -H -V -o test.spv test.frag

spirv-cross --version 330 --no-es 1111.frag.spv --output 1111.frag.spv.comp

gclient sync

gn gen out/Debug
gn args out/Debug/
mkdir -p out/Debug/corpus

```angular2html
angle_enable_vulkan_validation_layers = false
angle_enable_gl = false
angle_enable_swiftshader = false
```
ninja -C out/Debug

ANGLE_DEBUG_SPIRV_GENERATION=1;ANGLE_ENABLE_FUZZER_CORPUS_OUTPUT=1;ANGLE_FEATURE_OVERRIDES_ENABLED=generateSPIRVThroughGlslang:forceDriverUniformOverSpecConst;LD_LIBRARY_PATH=/media/google/Data/com/github/angle/out/Debug

./angle_unittests --gtest_list_tests > a.txt

./angle_unittests --gtest_filter=*RecordConstantPrecisionTest.HigherPrecisionConstantAsParameter*