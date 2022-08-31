<details>
  <summary>
ANGLE_DEBUG_SPIRV_GENERATION=1 ANGLE_FEATURE_OVERRIDES_ENABLED=generateSPIRVThroughGlslang ./out/Debug/hello_triangle
  </summary>
  


  ```js


INFO: Feature: generateSPIRVThroughGlslang enabled
#version 450 core
struct ANGLEDepthRangeParams {
  highp float near;
  highp float far;
  highp float diff;
  highp float reserved;
};
layout(location=0) in highp vec4 _uvPosition;
layout(set=0, binding=0, std140) uniform ANGLEUniformBlock{
  highp vec4 viewport;
  highp uint clipDistancesEnabled;
  lowp uint xfbActiveUnpaused;
  highp int xfbVerticesPerInstance;
  lowp int numSamples;
  highp ivec4 xfbBufferOffsets;
  highp uvec4 acbBufferOffsets;
  ANGLEDepthRangeParams depthRange;
} ANGLEUniforms;
layout(location=0) out highp vec4 ANGLEXfbPosition;
void main(){
  (gl_Position = _uvPosition);
}

; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 10
; Bound: 29
; Schema: 0
OpCapability Shader
%2 = OpExtInstImport "GLSL.std.450"
OpMemoryModel Logical GLSL450
OpEntryPoint Vertex %5 "main" %14 %18 %28
%1 = OpString "generated233"
OpSource GLSL 450 %1 "// OpModuleProcessed entry-point main
// OpModuleProcessed client vulkan100
// OpModuleProcessed target-env vulkan1.0
// OpModuleProcessed entry-point main
#line 1
#version 450 core
struct ANGLEDepthRangeParams {
  highp float near;
  highp float far;
  highp float diff;
  highp float reserved;
};
layout(location=0) in highp vec4 _uvPosition;
layout(set=0, binding=0, std140) uniform ANGLEUniformBlock{
  highp vec4 viewport;
  highp uint clipDistancesEnabled;
  lowp uint xfbActiveUnpaused;
  highp int xfbVerticesPerInstance;
  lowp int numSamples;
  highp ivec4 xfbBufferOffsets;
  highp uvec4 acbBufferOffsets;
  ANGLEDepthRangeParams depthRange;
} ANGLEUniforms;
layout(location=0) out highp vec4 ANGLEXfbPosition;
void main(){
  (gl_Position = _uvPosition);
}
"
OpName %5 "main"
OpName %12 "gl_PerVertex"
OpMemberName %12 0 "gl_Position"
OpMemberName %12 1 "gl_PointSize"
OpMemberName %12 2 "gl_ClipDistance"
OpMemberName %12 3 "gl_CullDistance"
OpName %14 ""
OpName %18 "_uvPosition"
OpName %24 "ANGLEDepthRangeParams"
OpMemberName %24 0 "near"
OpMemberName %24 1 "far"
OpMemberName %24 2 "diff"
OpMemberName %24 3 "reserved"
OpName %25 "ANGLEUniformBlock"
OpMemberName %25 0 "viewport"
OpMemberName %25 1 "clipDistancesEnabled"
OpMemberName %25 2 "xfbActiveUnpaused"
OpMemberName %25 3 "xfbVerticesPerInstance"
OpMemberName %25 4 "numSamples"
OpMemberName %25 5 "xfbBufferOffsets"
OpMemberName %25 6 "acbBufferOffsets"
OpMemberName %25 7 "depthRange"
OpName %27 "ANGLEUniforms"
OpName %28 "ANGLEXfbPosition"
OpMemberDecorate %12 0 BuiltIn Position
OpMemberDecorate %12 1 BuiltIn PointSize
OpMemberDecorate %12 2 BuiltIn ClipDistance
OpMemberDecorate %12 3 BuiltIn CullDistance
OpDecorate %12 Block
OpDecorate %18 Location 0
OpMemberDecorate %24 0 Offset 0
OpMemberDecorate %24 1 Offset 4
OpMemberDecorate %24 2 Offset 8
OpMemberDecorate %24 3 Offset 12
OpMemberDecorate %25 0 Offset 0
OpMemberDecorate %25 1 Offset 16
OpMemberDecorate %25 2 RelaxedPrecision
OpMemberDecorate %25 2 Offset 20
OpMemberDecorate %25 3 Offset 24
OpMemberDecorate %25 4 RelaxedPrecision
OpMemberDecorate %25 4 Offset 28
OpMemberDecorate %25 5 Offset 32
OpMemberDecorate %25 6 Offset 48
OpMemberDecorate %25 7 Offset 64
OpDecorate %25 Block
OpDecorate %27 DescriptorSet 0
OpDecorate %27 Binding 0
OpDecorate %28 Location 0
%3 = OpTypeVoid
%4 = OpTypeFunction %3
%7 = OpTypeFloat 32
%8 = OpTypeVector %7 4
%9 = OpTypeInt 32 0
%10 = OpConstant %9 1
%11 = OpTypeArray %7 %10
%12 = OpTypeStruct %8 %7 %11 %11
%13 = OpTypePointer Output %12
%14 = OpVariable %13 Output
%15 = OpTypeInt 32 1
%16 = OpConstant %15 0
%17 = OpTypePointer Input %8
%18 = OpVariable %17 Input
%20 = OpTypePointer Output %8
%22 = OpTypeVector %15 4
%23 = OpTypeVector %9 4
%24 = OpTypeStruct %7 %7 %7 %7
%25 = OpTypeStruct %8 %9 %9 %15 %15 %22 %23 %24
%26 = OpTypePointer Uniform %25
%27 = OpVariable %26 Uniform
%28 = OpVariable %20 Output
%5 = OpFunction %3 None %4
%6 = OpLabel
OpLine %1 21 0
%19 = OpLoad %8 %18
%21 = OpAccessChain %20 %14 %16
OpStore %21 %19
OpReturn
OpFunctionEnd

#version 450 core
layout (early_fragment_tests) in;
struct ANGLEDepthRangeParams {
  highp float near;
  highp float far;
  highp float diff;
  highp float reserved;
};
layout(set=0, binding=0, std140) uniform ANGLEUniformBlock{
  highp vec4 viewport;
  highp uint clipDistancesEnabled;
  lowp uint xfbActiveUnpaused;
  highp int xfbVerticesPerInstance;
  lowp int numSamples;
  highp ivec4 xfbBufferOffsets;
  highp uvec4 acbBufferOffsets;
  ANGLEDepthRangeParams depthRange;
} ANGLEUniforms;
layout(location=0) out mediump vec4 webgl_FragColor;
void main(){
  (webgl_FragColor = vec4(1.0, 0.0, 0.0, 1.0));
}

; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 10
; Bound: 22
; Schema: 0
OpCapability Shader
%2 = OpExtInstImport "GLSL.std.450"
OpMemoryModel Logical GLSL450
OpEntryPoint Fragment %5 "main" %10
OpExecutionMode %5 OriginUpperLeft
OpExecutionMode %5 EarlyFragmentTests
%1 = OpString "generated233"
OpSource GLSL 450 %1 "// OpModuleProcessed entry-point main
// OpModuleProcessed client vulkan100
// OpModuleProcessed target-env vulkan1.0
// OpModuleProcessed entry-point main
#line 1
#version 450 core
layout (early_fragment_tests) in;
struct ANGLEDepthRangeParams {
  highp float near;
  highp float far;
  highp float diff;
  highp float reserved;
};
layout(set=0, binding=0, std140) uniform ANGLEUniformBlock{
  highp vec4 viewport;
  highp uint clipDistancesEnabled;
  lowp uint xfbActiveUnpaused;
  highp int xfbVerticesPerInstance;
  lowp int numSamples;
  highp ivec4 xfbBufferOffsets;
  highp uvec4 acbBufferOffsets;
  ANGLEDepthRangeParams depthRange;
} ANGLEUniforms;
layout(location=0) out mediump vec4 webgl_FragColor;
void main(){
  (webgl_FragColor = vec4(1.0, 0.0, 0.0, 1.0));
}
"
OpName %5 "main"
OpName %10 "webgl_FragColor"
OpName %18 "ANGLEDepthRangeParams"
OpMemberName %18 0 "near"
OpMemberName %18 1 "far"
OpMemberName %18 2 "diff"
OpMemberName %18 3 "reserved"
OpName %19 "ANGLEUniformBlock"
OpMemberName %19 0 "viewport"
OpMemberName %19 1 "clipDistancesEnabled"
OpMemberName %19 2 "xfbActiveUnpaused"
OpMemberName %19 3 "xfbVerticesPerInstance"
OpMemberName %19 4 "numSamples"
OpMemberName %19 5 "xfbBufferOffsets"
OpMemberName %19 6 "acbBufferOffsets"
OpMemberName %19 7 "depthRange"
OpName %21 "ANGLEUniforms"
OpDecorate %10 RelaxedPrecision
OpDecorate %10 Location 0
OpMemberDecorate %18 0 Offset 0
OpMemberDecorate %18 1 Offset 4
OpMemberDecorate %18 2 Offset 8
OpMemberDecorate %18 3 Offset 12
OpMemberDecorate %19 0 Offset 0
OpMemberDecorate %19 1 Offset 16
OpMemberDecorate %19 2 RelaxedPrecision
OpMemberDecorate %19 2 Offset 20
OpMemberDecorate %19 3 Offset 24
OpMemberDecorate %19 4 RelaxedPrecision
OpMemberDecorate %19 4 Offset 28
OpMemberDecorate %19 5 Offset 32
OpMemberDecorate %19 6 Offset 48
OpMemberDecorate %19 7 Offset 64
OpDecorate %19 Block
OpDecorate %21 DescriptorSet 0
OpDecorate %21 Binding 0
%3 = OpTypeVoid
%4 = OpTypeFunction %3
%7 = OpTypeFloat 32
%8 = OpTypeVector %7 4
%9 = OpTypePointer Output %8
%10 = OpVariable %9 Output
%11 = OpConstant %7 1
%12 = OpConstant %7 0
%13 = OpConstantComposite %8 %11 %12 %12 %11
%14 = OpTypeInt 32 0
%15 = OpTypeInt 32 1
%16 = OpTypeVector %15 4
%17 = OpTypeVector %14 4
%18 = OpTypeStruct %7 %7 %7 %7
%19 = OpTypeStruct %8 %14 %14 %15 %15 %16 %17 %18
%20 = OpTypePointer Uniform %19
%21 = OpVariable %20 Uniform
%5 = OpFunction %3 None %4
%6 = OpLabel
OpLine %1 21 0
OpStore %10 %13
OpReturn
OpFunctionEnd

Rate: 804.57 frames / second
  ```
</details>

cat out/Debug/args.gn 
```
# Set build arguments here. See `gn help buildargs`.
#
is_component_build = false
angle_enable_swiftshader = false
angle_enable_gl = false
```
