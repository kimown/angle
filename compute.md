google@h:/media/google/Data/com/github/angle$ ANGLE_DEBUG_SPIRV_GENERATION=1;ANGLE_FEATURE_OVERRIDES_ENABLED=generateSPIRVThroughGlslang;LD_LIBRARY_PATH=/media/google/Data/com/github/angle/out/Debug /media/google/Data/com/github/angle/out/Debug/angle_end2end_tests --gtest_filter=*ComputeShaderTest*  
2 GPUs:
0 - Intel device id: 0x9BC5
1 - NVIDIA device id: 0x2484
Driver Vendor: Nvidia
Driver Version: 535.113.01

Active GPU: 1

Optimus: true
AMD Switchable: false


Note: Google Test filter = *ComputeShaderTest*
[==========] Running 261 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 258 tests from ComputeShaderTest
[ RUN      ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan (379 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (30 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_AsyncQueue (338 ms)
[ RUN      ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan (230 ms)
[ RUN      ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_AsyncQueue (237 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan (245 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_AsyncQueue (236 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan (281 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_AsyncQueue (247 ms)
[ RUN      ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan (267 ms)
[ RUN      ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_AsyncQueue (251 ms)
[ RUN      ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan (182 ms)
[ RUN      ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
^C
google@h:/media/google/Data/com/github/angle$ ANGLE_DEBUG_SPIRV_GENERATION=1;ANGLE_FEATURE_OVERRIDES_ENABLED=generateSPIRVThroughGlslang;LD_LIBRARY_PATH=/media/google/Data/com/github/angle/out/Debug /media/google/Data/com/github/angle/out/Debug/angle_end2end_tests --gtest_filter=*ComputeShaderTest/LargeStructArraySize*  
2 GPUs:
0 - Intel device id: 0x9BC5
1 - NVIDIA device id: 0x2484
Driver Vendor: Nvidia
Driver Version: 535.113.01

Active GPU: 1

Optimus: true
AMD Switchable: false


Note: Google Test filter = *ComputeShaderTest/LargeStructArraySize*
[==========] Running 0 tests from 0 test suites.
[==========] 0 tests from 0 test suites ran. (0 ms total)
[  PASSED  ] 0 tests.
google@h:/media/google/Data/com/github/angle$ ANGLE_DEBUG_SPIRV_GENERATION=1;ANGLE_FEATURE_OVERRIDES_ENABLED=generateSPIRVThroughGlslang;LD_LIBRARY_PATH=/media/google/Data/com/github/angle/out/Debug /media/google/Data/com/github/angle/out/Debug/angle_end2end_tests --gtest_filter=*ComputeShaderTest*  
2 GPUs:
0 - Intel device id: 0x9BC5
1 - NVIDIA device id: 0x2484
Driver Vendor: Nvidia
Driver Version: 535.113.01

Active GPU: 1

Optimus: true
AMD Switchable: false


Note: Google Test filter = *ComputeShaderTest*
[==========] Running 261 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 258 tests from ComputeShaderTest
[ RUN      ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan (356 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (21 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_AsyncQueue (345 ms)
[ RUN      ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan (237 ms)
[ RUN      ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_AsyncQueue (229 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan (338 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_AsyncQueue (299 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan (244 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_AsyncQueue (233 ms)
[ RUN      ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan (186 ms)
[ RUN      ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_AsyncQueue (233 ms)
[ RUN      ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan (296 ms)
[ RUN      ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_AsyncQueue (249 ms)
[ RUN      ] ComputeShaderTest.StartRenderingWithComputeProgram/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StartRenderingWithComputeProgram/ES3_1_Vulkan (216 ms)
[ RUN      ] ComputeShaderTest.StartRenderingWithComputeProgram/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.StartRenderingWithComputeProgram/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.StartRenderingWithComputeProgram/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StartRenderingWithComputeProgram/ES3_1_Vulkan_AsyncQueue (250 ms)
[ RUN      ] ComputeShaderTest.DispatchComputeWithRenderingProgram/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: glDispatchCompute: GL error: HIGH: No active program for the compute shader stage.
[       OK ] ComputeShaderTest.DispatchComputeWithRenderingProgram/ES3_1_Vulkan (183 ms)
[ RUN      ] ComputeShaderTest.DispatchComputeWithRenderingProgram/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchComputeWithRenderingProgram/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchComputeWithRenderingProgram/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: glDispatchCompute: GL error: HIGH: No active program for the compute shader stage.
[       OK ] ComputeShaderTest.DispatchComputeWithRenderingProgram/ES3_1_Vulkan_AsyncQueue (215 ms)
[ RUN      ] ComputeShaderTest.AccessAllSpecialVariables/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AccessAllSpecialVariables/ES3_1_Vulkan (258 ms)
[ RUN      ] ComputeShaderTest.AccessAllSpecialVariables/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AccessAllSpecialVariables/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AccessAllSpecialVariables/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AccessAllSpecialVariables/ES3_1_Vulkan_AsyncQueue (241 ms)
[ RUN      ] ComputeShaderTest.AccessPartSpecialVariables/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AccessPartSpecialVariables/ES3_1_Vulkan (238 ms)
[ RUN      ] ComputeShaderTest.AccessPartSpecialVariables/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AccessPartSpecialVariables/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AccessPartSpecialVariables/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AccessPartSpecialVariables/ES3_1_Vulkan_AsyncQueue (294 ms)
[ RUN      ] ComputeShaderTest.DispatchCompute/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchCompute/ES3_1_Vulkan (283 ms)
[ RUN      ] ComputeShaderTest.DispatchCompute/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchCompute/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchCompute/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchCompute/ES3_1_Vulkan_AsyncQueue (184 ms)
[ RUN      ] ComputeShaderTest.BufferImageBuffer/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.BufferImageBuffer/ES3_1_Vulkan (315 ms)
[ RUN      ] ComputeShaderTest.BufferImageBuffer/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BufferImageBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BufferImageBuffer/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.BufferImageBuffer/ES3_1_Vulkan_AsyncQueue (212 ms)
[ RUN      ] ComputeShaderTest.BufferImageBufferMapWrite/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.BufferImageBufferMapWrite/ES3_1_Vulkan (319 ms)
[ RUN      ] ComputeShaderTest.BufferImageBufferMapWrite/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BufferImageBufferMapWrite/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BufferImageBufferMapWrite/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.BufferImageBufferMapWrite/ES3_1_Vulkan_AsyncQueue (265 ms)
[ RUN      ] ComputeShaderTest.ImageAtomicCounterBuffer/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageAtomicCounterBuffer/ES3_1_Vulkan (248 ms)
[ RUN      ] ComputeShaderTest.ImageAtomicCounterBuffer/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageAtomicCounterBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageAtomicCounterBuffer/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageAtomicCounterBuffer/ES3_1_Vulkan_AsyncQueue (284 ms)
[ RUN      ] ComputeShaderTest.ImageShaderStorageBuffer/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageShaderStorageBuffer/ES3_1_Vulkan (248 ms)
[ RUN      ] ComputeShaderTest.ImageShaderStorageBuffer/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageShaderStorageBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageShaderStorageBuffer/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageShaderStorageBuffer/ES3_1_Vulkan_AsyncQueue (267 ms)
[ RUN      ] ComputeShaderTest.DispatchComputeIndirect/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseINFO: GL performance: HIGH: GPU stall due to ReadPixels
[       OK ] ComputeShaderTest.DispatchComputeIndirect/ES3_1_Vulkan (248 ms)
[ RUN      ] ComputeShaderTest.DispatchComputeIndirect/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchComputeIndirect/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchComputeIndirect/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseINFO: GL performance: HIGH: GPU stall due to ReadPixels
[       OK ] ComputeShaderTest.DispatchComputeIndirect/ES3_1_Vulkan_AsyncQueue (285 ms)
[ RUN      ] ComputeShaderTest.UseAsUBOThenUpdateThenDispatchComputeIndirect/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: GL performance: HIGH: GPU stall due to ReadPixels
INFO: GL performance: HIGH: GPU stall due to ReadPixels (this message will no longer repeat)
[       OK ] ComputeShaderTest.UseAsUBOThenUpdateThenDispatchComputeIndirect/ES3_1_Vulkan (298 ms)
[ RUN      ] ComputeShaderTest.UseAsUBOThenUpdateThenDispatchComputeIndirect/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.UseAsUBOThenUpdateThenDispatchComputeIndirect/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.UseAsUBOThenUpdateThenDispatchComputeIndirect/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.UseAsUBOThenUpdateThenDispatchComputeIndirect/ES3_1_Vulkan_AsyncQueue (266 ms)
[ RUN      ] ComputeShaderTest.BindImageTexture/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTexture/ES3_1_Vulkan (248 ms)
[ RUN      ] ComputeShaderTest.BindImageTexture/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTexture/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTexture/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTexture/ES3_1_Vulkan_AsyncQueue (273 ms)
[ RUN      ] ComputeShaderTest.ImageArrayWithoutBindingQualifier/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageArrayWithoutBindingQualifier/ES3_1_Vulkan (226 ms)
[ RUN      ] ComputeShaderTest.ImageArrayWithoutBindingQualifier/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageArrayWithoutBindingQualifier/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageArrayWithoutBindingQualifier/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageArrayWithoutBindingQualifier/ES3_1_Vulkan_AsyncQueue (187 ms)
[ RUN      ] ComputeShaderTest.ImageArrayUnusedElement/ES3_1_Vulkan
Test skipped: IsVulkan().
[       OK ] ComputeShaderTest.ImageArrayUnusedElement/ES3_1_Vulkan (278 ms)
[ RUN      ] ComputeShaderTest.ImageArrayUnusedElement/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageArrayUnusedElement/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageArrayUnusedElement/ES3_1_Vulkan_AsyncQueue
Test skipped: IsVulkan().
[       OK ] ComputeShaderTest.ImageArrayUnusedElement/ES3_1_Vulkan_AsyncQueue (184 ms)
[ RUN      ] ComputeShaderTest.ImageLoad/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageLoad/ES3_1_Vulkan (299 ms)
[ RUN      ] ComputeShaderTest.ImageLoad/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageLoad/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageLoad/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageLoad/ES3_1_Vulkan_AsyncQueue (183 ms)
[ RUN      ] ComputeShaderTest.ImageStore/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageStore/ES3_1_Vulkan (283 ms)
[ RUN      ] ComputeShaderTest.ImageStore/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageStore/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageStore/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageStore/ES3_1_Vulkan_AsyncQueue (247 ms)
[ RUN      ] ComputeShaderTest.ImageSize/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageSize/ES3_1_Vulkan (250 ms)
[ RUN      ] ComputeShaderTest.ImageSize/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageSize/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageSize/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageSize/ES3_1_Vulkan_AsyncQueue (231 ms)
[ RUN      ] ComputeShaderTest.TexelFetchFunction/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.TexelFetchFunction/ES3_1_Vulkan (281 ms)
[ RUN      ] ComputeShaderTest.TexelFetchFunction/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.TexelFetchFunction/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.TexelFetchFunction/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.TexelFetchFunction/ES3_1_Vulkan_AsyncQueue (265 ms)
[ RUN      ] ComputeShaderTest.TextureFunction/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.TextureFunction/ES3_1_Vulkan (236 ms)
[ RUN      ] ComputeShaderTest.TextureFunction/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.TextureFunction/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.TextureFunction/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.TextureFunction/ES3_1_Vulkan_AsyncQueue (272 ms)
[ RUN      ] ComputeShaderTest.SamplingAndImageReadWrite/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.SamplingAndImageReadWrite/ES3_1_Vulkan (278 ms)
[ RUN      ] ComputeShaderTest.SamplingAndImageReadWrite/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.SamplingAndImageReadWrite/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.SamplingAndImageReadWrite/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.SamplingAndImageReadWrite/ES3_1_Vulkan_AsyncQueue (182 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture2D/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTexture2D/ES3_1_Vulkan (317 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture2D/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTexture2D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture2D/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTexture2D/ES3_1_Vulkan_AsyncQueue (183 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2D/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2D/ES3_1_Vulkan (298 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2D/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2D/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2D/ES3_1_Vulkan_AsyncQueue (184 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture2DArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTexture2DArray/ES3_1_Vulkan (315 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture2DArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTexture2DArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture2DArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTexture2DArray/ES3_1_Vulkan_AsyncQueue (183 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2DArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2DArray/ES3_1_Vulkan (299 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2DArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2DArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2DArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2DArray/ES3_1_Vulkan_AsyncQueue (201 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture3D/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTexture3D/ES3_1_Vulkan (279 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture3D/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTexture3D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTexture3D/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTexture3D/ES3_1_Vulkan_AsyncQueue (249 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTextureCube/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTextureCube/ES3_1_Vulkan (252 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTextureCube/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTextureCube/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithTextureCube/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithTextureCube/ES3_1_Vulkan_AsyncQueue (246 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTexture2DArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithOneLayerTexture2DArray/ES3_1_Vulkan (233 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTexture2DArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithOneLayerTexture2DArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTexture2DArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithOneLayerTexture2DArray/ES3_1_Vulkan_AsyncQueue (216 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTexture3D/ES3_1_Vulkan
Test skipped: IsVulkan().
[       OK ] ComputeShaderTest.BindImageTextureWithOneLayerTexture3D/ES3_1_Vulkan (293 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTexture3D/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithOneLayerTexture3D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTexture3D/ES3_1_Vulkan_AsyncQueue
Test skipped: IsVulkan().
[       OK ] ComputeShaderTest.BindImageTextureWithOneLayerTexture3D/ES3_1_Vulkan_AsyncQueue (273 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTextureCube/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithOneLayerTextureCube/ES3_1_Vulkan (249 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTextureCube/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithOneLayerTextureCube/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithOneLayerTextureCube/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithOneLayerTextureCube/ES3_1_Vulkan_AsyncQueue (232 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithMixTextureTypes/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithMixTextureTypes/ES3_1_Vulkan (202 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithMixTextureTypes/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.BindImageTextureWithMixTextureTypes/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.BindImageTextureWithMixTextureTypes/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.BindImageTextureWithMixTextureTypes/ES3_1_Vulkan_AsyncQueue (255 ms)
[ RUN      ] ComputeShaderTest.QueryComputeWorkGroupSize/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: glGetProgramiv: GL error: HIGH: No active compute shader stage in this program.
INFO: glGetProgramiv: GL error: HIGH: Program not linked.
[       OK ] ComputeShaderTest.QueryComputeWorkGroupSize/ES3_1_Vulkan (247 ms)
[ RUN      ] ComputeShaderTest.QueryComputeWorkGroupSize/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.QueryComputeWorkGroupSize/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.QueryComputeWorkGroupSize/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: glGetProgramiv: GL error: HIGH: No active compute shader stage in this program.
INFO: glGetProgramiv: GL error: HIGH: Program not linked.
[       OK ] ComputeShaderTest.QueryComputeWorkGroupSize/ES3_1_Vulkan_AsyncQueue (252 ms)
[ RUN      ] ComputeShaderTest.GroupMemoryBarrierAndBarrierTest/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.GroupMemoryBarrierAndBarrierTest/ES3_1_Vulkan (285 ms)
[ RUN      ] ComputeShaderTest.GroupMemoryBarrierAndBarrierTest/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.GroupMemoryBarrierAndBarrierTest/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.GroupMemoryBarrierAndBarrierTest/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.GroupMemoryBarrierAndBarrierTest/ES3_1_Vulkan_AsyncQueue (350 ms)
[ RUN      ] ComputeShaderTest.ExceedCombinedShaderOutputResourcesInCS/ES3_1_Vulkan
Test skipped: maxCombinedShaderOutputResources >= maxComputeShaderStorageBlocks + maxComputeImageUniforms.
[       OK ] ComputeShaderTest.ExceedCombinedShaderOutputResourcesInCS/ES3_1_Vulkan (192 ms)
[ RUN      ] ComputeShaderTest.ExceedCombinedShaderOutputResourcesInCS/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ExceedCombinedShaderOutputResourcesInCS/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ExceedCombinedShaderOutputResourcesInCS/ES3_1_Vulkan_AsyncQueue
Test skipped: maxCombinedShaderOutputResources >= maxComputeShaderStorageBlocks + maxComputeImageUniforms.
[       OK ] ComputeShaderTest.ExceedCombinedShaderOutputResourcesInCS/ES3_1_Vulkan_AsyncQueue (278 ms)
[ RUN      ] ComputeShaderTest.UniformBlockWithStructMember/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.UniformBlockWithStructMember/ES3_1_Vulkan (251 ms)
[ RUN      ] ComputeShaderTest.UniformBlockWithStructMember/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.UniformBlockWithStructMember/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.UniformBlockWithStructMember/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.UniformBlockWithStructMember/ES3_1_Vulkan_AsyncQueue (198 ms)
[ RUN      ] ComputeShaderTest.NonArraySharedVariable/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.NonArraySharedVariable/ES3_1_Vulkan (318 ms)
[ RUN      ] ComputeShaderTest.NonArraySharedVariable/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.NonArraySharedVariable/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.NonArraySharedVariable/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.NonArraySharedVariable/ES3_1_Vulkan_AsyncQueue (264 ms)
[ RUN      ] ComputeShaderTest.NonStructArrayAsSharedVariable/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.NonStructArrayAsSharedVariable/ES3_1_Vulkan (201 ms)
[ RUN      ] ComputeShaderTest.NonStructArrayAsSharedVariable/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.NonStructArrayAsSharedVariable/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.NonStructArrayAsSharedVariable/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.NonStructArrayAsSharedVariable/ES3_1_Vulkan_AsyncQueue (314 ms)
[ RUN      ] ComputeShaderTest.StructArrayAsSharedVariable/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StructArrayAsSharedVariable/ES3_1_Vulkan (203 ms)
[ RUN      ] ComputeShaderTest.StructArrayAsSharedVariable/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.StructArrayAsSharedVariable/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.StructArrayAsSharedVariable/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StructArrayAsSharedVariable/ES3_1_Vulkan_AsyncQueue (297 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsNoReturnValue/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsNoReturnValue/ES3_1_Vulkan (184 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsNoReturnValue/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AtomicFunctionsNoReturnValue/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsNoReturnValue/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsNoReturnValue/ES3_1_Vulkan_AsyncQueue (331 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsInNonInitializerSingleAssignment/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsInNonInitializerSingleAssignment/ES3_1_Vulkan (278 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsInNonInitializerSingleAssignment/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AtomicFunctionsInNonInitializerSingleAssignment/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsInNonInitializerSingleAssignment/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsInNonInitializerSingleAssignment/ES3_1_Vulkan_AsyncQueue (199 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsInitializerWithUnsigned/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsInitializerWithUnsigned/ES3_1_Vulkan (321 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsInitializerWithUnsigned/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AtomicFunctionsInitializerWithUnsigned/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsInitializerWithUnsigned/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsInitializerWithUnsigned/ES3_1_Vulkan_AsyncQueue (268 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsReturnWithUnsigned/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsReturnWithUnsigned/ES3_1_Vulkan (297 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsReturnWithUnsigned/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AtomicFunctionsReturnWithUnsigned/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsReturnWithUnsigned/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsReturnWithUnsigned/ES3_1_Vulkan_AsyncQueue (265 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsReturnWithMultipleTypes/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsReturnWithMultipleTypes/ES3_1_Vulkan (218 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsReturnWithMultipleTypes/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AtomicFunctionsReturnWithMultipleTypes/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AtomicFunctionsReturnWithMultipleTypes/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicFunctionsReturnWithMultipleTypes/ES3_1_Vulkan_AsyncQueue (314 ms)
[ RUN      ] ComputeShaderTest.UniformBuffer/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.UniformBuffer/ES3_1_Vulkan (267 ms)
[ RUN      ] ComputeShaderTest.UniformBuffer/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.UniformBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.UniformBuffer/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.UniformBuffer/ES3_1_Vulkan_AsyncQueue (266 ms)
[ RUN      ] ComputeShaderTest.StoreImageThenLoad/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StoreImageThenLoad/ES3_1_Vulkan (247 ms)
[ RUN      ] ComputeShaderTest.StoreImageThenLoad/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.StoreImageThenLoad/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.StoreImageThenLoad/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StoreImageThenLoad/ES3_1_Vulkan_AsyncQueue (284 ms)
[ RUN      ] ComputeShaderTest.LoadImageThenStore/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LoadImageThenStore/ES3_1_Vulkan (248 ms)
[ RUN      ] ComputeShaderTest.LoadImageThenStore/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LoadImageThenStore/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.LoadImageThenStore/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LoadImageThenStore/ES3_1_Vulkan_AsyncQueue (235 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksStructLength/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksStructLength/ES3_1_Vulkan (265 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksStructLength/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksStructLength/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksStructLength/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksStructLength/ES3_1_Vulkan_AsyncQueue (266 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksScalar/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksScalar/ES3_1_Vulkan (232 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksScalar/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksScalar/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksScalar/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksScalar/ES3_1_Vulkan_AsyncQueue (232 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksVector/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksVector/ES3_1_Vulkan (233 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksVector/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksVector/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksVector/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksVector/ES3_1_Vulkan_AsyncQueue (249 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksMatrix/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksMatrix/ES3_1_Vulkan (233 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksMatrix/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksMatrix/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksMatrix/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksMatrix/ES3_1_Vulkan_AsyncQueue (233 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksScalarArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksScalarArray/ES3_1_Vulkan (267 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksScalarArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksScalarArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksScalarArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksScalarArray/ES3_1_Vulkan_AsyncQueue (248 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksVectorArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksVectorArray/ES3_1_Vulkan (267 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksVectorArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksVectorArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksVectorArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksVectorArray/ES3_1_Vulkan_AsyncQueue (256 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksMatrixArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksMatrixArray/ES3_1_Vulkan (278 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksMatrixArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksMatrixArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksMatrixArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksMatrixArray/ES3_1_Vulkan_AsyncQueue (231 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksInAssignmentRight/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksInAssignmentRight/ES3_1_Vulkan (249 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksInAssignmentRight/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksInAssignmentRight/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksInAssignmentRight/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksInAssignmentRight/ES3_1_Vulkan_AsyncQueue (266 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithUnsizedArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksWithUnsizedArray/ES3_1_Vulkan (282 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithUnsizedArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksWithUnsizedArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithUnsizedArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksWithUnsizedArray/ES3_1_Vulkan_AsyncQueue (250 ms)
[ RUN      ] ComputeShaderTest.IndexAndDotOperatorsInSSBOIndexIndirectOperator/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.IndexAndDotOperatorsInSSBOIndexIndirectOperator/ES3_1_Vulkan (232 ms)
[ RUN      ] ComputeShaderTest.IndexAndDotOperatorsInSSBOIndexIndirectOperator/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.IndexAndDotOperatorsInSSBOIndexIndirectOperator/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.IndexAndDotOperatorsInSSBOIndexIndirectOperator/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.IndexAndDotOperatorsInSSBOIndexIndirectOperator/ES3_1_Vulkan_AsyncQueue (232 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithNonSSBOSwizzle/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksWithNonSSBOSwizzle/ES3_1_Vulkan (233 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithNonSSBOSwizzle/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksWithNonSSBOSwizzle/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithNonSSBOSwizzle/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksWithNonSSBOSwizzle/ES3_1_Vulkan_AsyncQueue (232 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithSSBOSwizzle/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksWithSSBOSwizzle/ES3_1_Vulkan (250 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithSSBOSwizzle/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksWithSSBOSwizzle/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ShaderStorageBlocksWithSSBOSwizzle/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ShaderStorageBlocksWithSSBOSwizzle/ES3_1_Vulkan_AsyncQueue (251 ms)
[ RUN      ] ComputeShaderTest.LargeStructArraySize/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LargeStructArraySize/ES3_1_Vulkan (298 ms)
[ RUN      ] ComputeShaderTest.LargeStructArraySize/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.LargeStructArraySize/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.LargeStructArraySize/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.LargeStructArraySize/ES3_1_Vulkan_AsyncQueue (283 ms)
[ RUN      ] ComputeShaderTest.UniformDirty/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.UniformDirty/ES3_1_Vulkan (251 ms)
[ RUN      ] ComputeShaderTest.UniformDirty/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.UniformDirty/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.UniformDirty/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.UniformDirty/ES3_1_Vulkan_AsyncQueue (247 ms)
[ RUN      ] ComputeShaderTest.StorageBufferBoundUnchanged/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StorageBufferBoundUnchanged/ES3_1_Vulkan (270 ms)
[ RUN      ] ComputeShaderTest.StorageBufferBoundUnchanged/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.StorageBufferBoundUnchanged/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.StorageBufferBoundUnchanged/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.StorageBufferBoundUnchanged/ES3_1_Vulkan_AsyncQueue (297 ms)
[ RUN      ] ComputeShaderTest.ImageSizeMipmapSlice/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageSizeMipmapSlice/ES3_1_Vulkan (269 ms)
[ RUN      ] ComputeShaderTest.ImageSizeMipmapSlice/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageSizeMipmapSlice/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageSizeMipmapSlice/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageSizeMipmapSlice/ES3_1_Vulkan_AsyncQueue (264 ms)
[ RUN      ] ComputeShaderTest.ImageLoadMipmapSlice/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false
[       OK ] ComputeShaderTest.ImageLoadMipmapSlice/ES3_1_Vulkan (265 ms)
[ RUN      ] ComputeShaderTest.ImageLoadMipmapSlice/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageLoadMipmapSlice/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageLoadMipmapSlice/ES3_1_Vulkan_AsyncQueue

/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageLoadMipmapSlice/ES3_1_Vulkan_AsyncQueue (283 ms)
[ RUN      ] ComputeShaderTest.ImageStoreMipmapSlice/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageStoreMipmapSlice/ES3_1_Vulkan (188 ms)
[ RUN      ] ComputeShaderTest.ImageStoreMipmapSlice/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageStoreMipmapSlice/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageStoreMipmapSlice/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ImageStoreMipmapSlice/ES3_1_Vulkan_AsyncQueue (257 ms)
[ RUN      ] ComputeShaderTest.DrawTexture1DispatchTexture2/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DrawTexture1DispatchTexture2/ES3_1_Vulkan (301 ms)
[ RUN      ] ComputeShaderTest.DrawTexture1DispatchTexture2/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DrawTexture1DispatchTexture2/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DrawTexture1DispatchTexture2/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DrawTexture1DispatchTexture2/ES3_1_Vulkan_AsyncQueue (267 ms)
[ RUN      ] ComputeShaderTest.DispatchDraw/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchDraw/ES3_1_Vulkan (249 ms)
[ RUN      ] ComputeShaderTest.DispatchDraw/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchDraw/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchDraw/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchDraw/ES3_1_Vulkan_AsyncQueue (265 ms)
[ RUN      ] ComputeShaderTest.DrawDispatchDispatchDraw/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DrawDispatchDispatchDraw/ES3_1_Vulkan (268 ms)
[ RUN      ] ComputeShaderTest.DrawDispatchDispatchDraw/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DrawDispatchDispatchDraw/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DrawDispatchDispatchDraw/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DrawDispatchDispatchDraw/ES3_1_Vulkan_AsyncQueue (247 ms)
[ RUN      ] ComputeShaderTest.DispatchDrawDrawDispatch/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchDrawDrawDispatch/ES3_1_Vulkan (285 ms)
[ RUN      ] ComputeShaderTest.DispatchDrawDrawDispatch/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchDrawDrawDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchDrawDrawDispatch/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchDrawDrawDispatch/ES3_1_Vulkan_AsyncQueue (266 ms)
[ RUN      ] ComputeShaderTest.InvalidMemoryBarrier/ES3_1_Vulkan
INFO: glMemoryBarrier: GL error: HIGH: Invalid memory barrier bit.
[       OK ] ComputeShaderTest.InvalidMemoryBarrier/ES3_1_Vulkan (183 ms)
[ RUN      ] ComputeShaderTest.InvalidMemoryBarrier/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.InvalidMemoryBarrier/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.InvalidMemoryBarrier/ES3_1_Vulkan_AsyncQueue
INFO: glMemoryBarrier: GL error: HIGH: Invalid memory barrier bit.
[       OK ] ComputeShaderTest.InvalidMemoryBarrier/ES3_1_Vulkan_AsyncQueue (238 ms)
[ RUN      ] ComputeShaderTest.AtomicCounterIncrement/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicCounterIncrement/ES3_1_Vulkan (292 ms)
[ RUN      ] ComputeShaderTest.AtomicCounterIncrement/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AtomicCounterIncrement/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AtomicCounterIncrement/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AtomicCounterIncrement/ES3_1_Vulkan_AsyncQueue (316 ms)
[ RUN      ] ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan (270 ms)
[ RUN      ] ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan_AsyncQueue (249 ms)
[ RUN      ] ComputeShaderTest.DrawDispatchDrawPreserve/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DrawDispatchDrawPreserve/ES3_1_Vulkan (364 ms)
[ RUN      ] ComputeShaderTest.DrawDispatchDrawPreserve/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DrawDispatchDrawPreserve/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DrawDispatchDrawPreserve/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:false[       OK ] ComputeShaderTest.DrawDispatchDrawPreserve/ES3_1_Vulkan_AsyncQueue (282 ms)
[ RUN      ] ComputeShaderTest.ValidateMaxComputeWorkGroupCount/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ValidateMaxComputeWorkGroupCount/ES3_1_Vulkan (249 ms)
[ RUN      ] ComputeShaderTest.ValidateMaxComputeWorkGroupCount/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ValidateMaxComputeWorkGroupCount/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ValidateMaxComputeWorkGroupCount/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.ValidateMaxComputeWorkGroupCount/ES3_1_Vulkan_AsyncQueue (249 ms)
[ RUN      ] ComputeShaderTest.DispatchConvertVertexDispatch/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: GL performance: LOW: The Vulkan driver does not support vertex attribute format 0x6AF1, emulating with 0x881A
[       OK ] ComputeShaderTest.DispatchConvertVertexDispatch/ES3_1_Vulkan (283 ms)
[ RUN      ] ComputeShaderTest.DispatchConvertVertexDispatch/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchConvertVertexDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchConvertVertexDispatch/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: GL performance: LOW: The Vulkan driver does not support vertex attribute format 0x6AF1, emulating with 0x881A
[       OK ] ComputeShaderTest.DispatchConvertVertexDispatch/ES3_1_Vulkan_AsyncQueue (282 ms)
[ RUN      ] ComputeShaderTest.DispatchBlitStencilDispatch/ES3_1_Vulkan
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: GL performance: LOW: Inefficient BlitFramebuffer operation on the stencil aspect due to lack of shader stencil export su
[       OK ] ComputeShaderTest.DispatchBlitStencilDispatch/ES3_1_Vulkan (318 ms)
[ RUN      ] ComputeShaderTest.DispatchBlitStencilDispatch/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchBlitStencilDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchBlitStencilDispatch/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseenableNonConstantInitializers:falseenableNonConstantInitializers:falseINFO: GL performance: LOW: Inefficient BlitFramebuffer operation on the stencil aspect due to lack of shader stencil export su
[       OK ] ComputeShaderTest.DispatchBlitStencilDispatch/ES3_1_Vulkan_AsyncQueue (296 ms)
[ RUN      ] ComputeShaderTest.DispatchGenerateMipmapDispatch/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchGenerateMipmapDispatch/ES3_1_Vulkan (299 ms)
[ RUN      ] ComputeShaderTest.DispatchGenerateMipmapDispatch/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.DispatchGenerateMipmapDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.DispatchGenerateMipmapDispatch/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.DispatchGenerateMipmapDispatch/ES3_1_Vulkan_AsyncQueue (231 ms)
[ RUN      ] ComputeShaderTest.AliasingFormatForImageArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AliasingFormatForImageArray/ES3_1_Vulkan (284 ms)
[ RUN      ] ComputeShaderTest.AliasingFormatForImageArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AliasingFormatForImageArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AliasingFormatForImageArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AliasingFormatForImageArray/ES3_1_Vulkan_AsyncQueue (248 ms)
[ RUN      ] ComputeShaderTest.AliasingFormatForOneLayerOfImageArray/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AliasingFormatForOneLayerOfImageArray/ES3_1_Vulkan (233 ms)
[ RUN      ] ComputeShaderTest.AliasingFormatForOneLayerOfImageArray/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.AliasingFormatForOneLayerOfImageArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.AliasingFormatForOneLayerOfImageArray/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.AliasingFormatForOneLayerOfImageArray/ES3_1_Vulkan_AsyncQueue (249 ms)
[ RUN      ] ComputeShaderTest.WriteToPersistentBuffer/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.WriteToPersistentBuffer/ES3_1_Vulkan (251 ms)
[ RUN      ] ComputeShaderTest.WriteToPersistentBuffer/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.WriteToPersistentBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.WriteToPersistentBuffer/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:false[       OK ] ComputeShaderTest.WriteToPersistentBuffer/ES3_1_Vulkan_AsyncQueue (266 ms)
[ RUN      ] ComputeShaderTest.ImageBufferMapWrite/ES3_1_Vulkan
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseINFO: GL performance: HIGH: GPU stall due to mapping buffer in use by the GPU
[       OK ] ComputeShaderTest.ImageBufferMapWrite/ES3_1_Vulkan (265 ms)
[ RUN      ] ComputeShaderTest.ImageBufferMapWrite/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageBufferMapWrite/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageBufferMapWrite/ES3_1_Vulkan_AsyncQueue
/media/google/Data/com/github/angle
enableNonConstantInitializers:falseINFO: GL performance: HIGH: GPU stall due to mapping buffer in use by the GPU
[       OK ] ComputeShaderTest.ImageBufferMapWrite/ES3_1_Vulkan_AsyncQueue (232 ms)
[ RUN      ] ComputeShaderTest.ImageBufferMapWriteAndBufferSubData/ES3_1_Vulkan
Test skipped: IsVulkan().
[       OK ] ComputeShaderTest.ImageBufferMapWriteAndBufferSubData/ES3_1_Vulkan (232 ms)
[ RUN      ] ComputeShaderTest.ImageBufferMapWriteAndBufferSubData/ES3_1_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTest.ImageBufferMapWriteAndBufferSubData/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader (0 ms)
[ RUN      ] ComputeShaderTest.ImageBufferMapWriteAndBufferSubData/ES3_1_Vulkan_AsyncQueue
Test skipped: IsVulkan().
[       OK ] ComputeShaderTest.ImageBufferMapWriteAndBufferSubData/ES3_1_Vulkan_AsyncQueue (249 ms)
[----------] 258 tests from ComputeShaderTest (44441 ms total)

[----------] 3 tests from ComputeShaderTestES3
[ RUN      ] ComputeShaderTestES3.NotSupported/ES3_Vulkan
INFO: glCreateShader: GL error: HIGH: OpenGL ES 3.1 Required
[       OK ] ComputeShaderTestES3.NotSupported/ES3_Vulkan (367 ms)
[ RUN      ] ComputeShaderTestES3.NotSupported/ES3_Vulkan_SwiftShader
INFO: EGL ERROR: eglGetPlatformDisplay: EGL_ANGLE_platform_angle_device_type_swiftshader is not supported
Failed to get display: 0x3004
../../src/tests/test_utils/ANGLETest.cpp:713: Failure
Failed
EGL Display init failed.
[  FAILED  ] ComputeShaderTestES3.NotSupported/ES3_Vulkan_SwiftShader, where GetParam() = ES3_Vulkan_SwiftShader (21 ms)
[ RUN      ] ComputeShaderTestES3.NotSupported/ES3_Vulkan_AsyncQueue
INFO: glCreateShader: GL error: HIGH: OpenGL ES 3.1 Required
[       OK ] ComputeShaderTestES3.NotSupported/ES3_Vulkan_AsyncQueue (348 ms)
[----------] 3 tests from ComputeShaderTestES3 (736 ms total)

[----------] Global test environment tear-down
[==========] 261 tests from 2 test suites ran. (45179 ms total)
[  PASSED  ] 174 tests.
[  FAILED  ] 87 tests, listed below:
[  FAILED  ] ComputeShaderTest.LinkComputeProgram/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DetachShaderAfterLinkSuccess/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.LinkComputeProgramNoLocalSizeLinkError/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.LinkComputeProgramWithUniforms/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AttachMultipleShaders/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AttachmentCount/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.StartRenderingWithComputeProgram/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchComputeWithRenderingProgram/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AccessAllSpecialVariables/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AccessPartSpecialVariables/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchCompute/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BufferImageBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BufferImageBufferMapWrite/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageAtomicCounterBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageShaderStorageBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchComputeIndirect/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.UseAsUBOThenUpdateThenDispatchComputeIndirect/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTexture/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageArrayWithoutBindingQualifier/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageArrayUnusedElement/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageLoad/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageStore/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageSize/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.TexelFetchFunction/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.TextureFunction/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.SamplingAndImageReadWrite/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTexture2D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTexture2DArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithNonZeroBaseTexture2DArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTexture3D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithTextureCube/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithOneLayerTexture2DArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithOneLayerTexture3D/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithOneLayerTextureCube/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.BindImageTextureWithMixTextureTypes/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.QueryComputeWorkGroupSize/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.GroupMemoryBarrierAndBarrierTest/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ExceedCombinedShaderOutputResourcesInCS/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.UniformBlockWithStructMember/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.NonArraySharedVariable/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.NonStructArrayAsSharedVariable/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.StructArrayAsSharedVariable/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AtomicFunctionsNoReturnValue/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AtomicFunctionsInNonInitializerSingleAssignment/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AtomicFunctionsInitializerWithUnsigned/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AtomicFunctionsReturnWithUnsigned/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AtomicFunctionsReturnWithMultipleTypes/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.UniformBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.StoreImageThenLoad/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.LoadImageThenStore/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksStructLength/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksScalar/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksVector/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksMatrix/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksScalarArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksVectorArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksMatrixArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksInAssignmentRight/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksWithUnsizedArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.IndexAndDotOperatorsInSSBOIndexIndirectOperator/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksWithNonSSBOSwizzle/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ShaderStorageBlocksWithSSBOSwizzle/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.LargeStructArraySize/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.UniformDirty/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.StorageBufferBoundUnchanged/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageSizeMipmapSlice/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageLoadMipmapSlice/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageStoreMipmapSlice/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DrawTexture1DispatchTexture2/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchDraw/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DrawDispatchDispatchDraw/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchDrawDrawDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.InvalidMemoryBarrier/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AtomicCounterIncrement/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DrawDispatchDrawPreserve/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ValidateMaxComputeWorkGroupCount/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchConvertVertexDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchBlitStencilDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.DispatchGenerateMipmapDispatch/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AliasingFormatForImageArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.AliasingFormatForOneLayerOfImageArray/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.WriteToPersistentBuffer/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageBufferMapWrite/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTest.ImageBufferMapWriteAndBufferSubData/ES3_1_Vulkan_SwiftShader, where GetParam() = ES3_1_Vulkan_SwiftShader
[  FAILED  ] ComputeShaderTestES3.NotSupported/ES3_Vulkan_SwiftShader, where GetParam() = ES3_Vulkan_SwiftShader

87 FAILED TESTS


ANGLE_DEBUG_SPIRV_GENERATION=1;ANGLE_FEATURE_OVERRIDES_ENABLED=generateSPIRVThroughGlslang;LD_LIBRARY_PATH=/media/google/Data/com/github/angle/out/Debug /media/google/Data/com/github/angle/out/Debug/angle_end2end_tests --gtest_filter=*ComputeShaderTest* 




--gtest_filter=*ComputeShaderTest.VeryLargeArrayInsideFunction/ES3_1_Vulkan  --gtest_repeat=1