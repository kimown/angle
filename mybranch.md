https://www.yuque.com/kimown/hiy9e0/rnbpsa
https://www.yuque.com/kimown/hiy9e0/cc6let
https://www.yuque.com/kimown/hiy9e0/yaalux
https://www.yuque.com/kimown/hiy9e0/rgiccu

```

cat /etc/issue
git clone https://github.com/kimown/angle.git
cd angle
python scripts/bootstrap.py
gclient sync
git checkout mybranch
gclient sync
./build/install-build-deps.sh
gn gen out/Debug
gn args out/Debug

angle_shared_libvulkan = true
angle_enable_vulkan = true
angle_enable_vulkan_validation_layers = true
angle_enable_gl = false
angle_enable_swiftshader = false
enable_dsyms = true

ninja -C out/Debug


vi tools/flex-bison/README.md
vi ./build/install-build-deps.sh

./tools/flex-bison/linux/bison --help

python2 scripts/run_code_generation.py



export VK_LAYER_ENABLES=VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT
./out/Debug/hello_triangle --use-angle=vulkan


5, debugPrintfEXT, int, 
-----name a
5, debugPrintfEXT, int, 
-----name a
WARN: DebugUtilsMessenger(326): [ UNASSIGNED-DEBUG-PRINTF ] Validation Information: [ UNASSIGNED-DEBUG-PRINTF ] Object 0: handle = 0x56440da128f0, type = VK_OBJECT_TYPE_DEVICE; | MessageID = 0x92394c89 | dynamic vaulue:a, 2333333
                            Object: 0x56440da128f0 (type = Device(3))

WARN: DebugUtilsMessenger(326): [ UNASSIGNED-DEBUG-PRINTF ] Validation Information: [ UNASSIGNED-DEBUG-PRINTF ] Object 0: handle = 0x56440da128f0, type = VK_OBJECT_TYPE_DEVICE; | MessageID = 0x92394c89 | dynamic vaulue:a, 2333333
                            Object: 0x56440da128f0 (type = Device(3))




tar -czvf angle-linux-x64.tar.gz angle/out/Debug/*.so angle/include/
curl -I http://127.0.0.1:8000/angle-linux-x64.tar.gz

http://127.0.0.1:8000/angle-darwin-x64.tar.gz
curl -I http://127.0.0.1:8000/angle-linux-x64.tar.gz


```


新增debugPrintfEXT: https://www.yuque.com/search?related=true&q=debugPrintfEXT
查看已有函数,fma: https://www.yuque.com/search?related=true&q=fma
需要使用bison: https://www.yuque.com/search?related=true&q=bison

修改preprocessor.l，preprocessor.y后，会影响14个autogen文件,类似fma函数：https://github.com/google/angle/commit/9af3e13785ab9ef7a9bc70714fd6c2f919e44301#diff-a00763384f27f19486a9e0cbbba3524838a516b360d3ef6c0612a567779f573e

```
automation git:(master) ✗ git status |grep autogen
    modified:   ../../src/compiler/preprocessor/preprocessor_lex_autogen.cpp
    modified:   ../../src/compiler/preprocessor/preprocessor_tab_autogen.cpp
    modified:   ../../src/compiler/translator/ImmutableString_ESSL_autogen.cpp
    modified:   ../../src/compiler/translator/ImmutableString_autogen.cpp
    modified:   ../../src/compiler/translator/ParseContext_ESSL_autogen.h
    modified:   ../../src/compiler/translator/ParseContext_complete_autogen.h
    modified:   ../../src/compiler/translator/SymbolTable_ESSL_autogen.cpp
    modified:   ../../src/compiler/translator/SymbolTable_autogen.cpp
    modified:   ../../src/compiler/translator/SymbolTable_autogen.h
    modified:   ../../src/compiler/translator/tree_util/BuiltIn_ESSL_autogen.h
    modified:   ../../src/compiler/translator/tree_util/BuiltIn_complete_autogen.h
    modified:   ../../src/tests/compiler_tests/ImmutableString_test_ESSL_autogen.cpp
    modified:   ../../src/tests/compiler_tests/ImmutableString_test_autogen.cpp

```