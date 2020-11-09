https://github.com/google/angle/blob/ddc41208c15ffd9aae99e3ac6c9d59a09df914d9/doc/ContributingCode.md#build-maintenance

/Users/google/com/github/depot_tools/download_from_google_storage --bucket angle-flex-bison -d /Users/google/com/github/angle/tools/flex-bison/linux


https://github.com/google/angle/blob/master/doc/DevSetup.md#getting-the-source

```sh

cat /etc/issue
git clone https://github.com/google/angle.git
cd angle
python scripts/bootstrap.py
gclient sync
git checkout master
git checkout 2f2595a8
gclient sync

vi tools/flex-bison/README.md
vi ./build/install-build-deps.sh

./tools/flex-bison/linux/bison --help

python2 scripts/run_code_generation.py

// scripts/run_code_generation.py -> src/compiler/preprocessor/generate_parser.py -> src/compiler/generate_parser_tools.py


```

``` scripts/run_code_generation.py
         args = ['git.bat'] if os.name == 'nt' else ['git']
-        args += ['cl', 'format']
+        args += ['--version', '--version']
```


上传: python2 tools/flex-bison/update_flex_bison_binaries.py

# 查看版本：
/Users/google/com/github/depot_tools/gsutil.py ls gs://angle-flex-bison
/Users/google/com/github/depot_tools/gsutil.py ls gs://angle-builds


gsutil cp gs://chromium-clang-format/buildtools/mac/clang-format.sha1 .
```
HEAD detached at 2f2595a
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	modified:   scripts/code_generation_hashes/Static_builtins.json
	modified:   scripts/run_code_generation.py
	modified:   src/compiler/translator/ImmutableString_ESSL_autogen.cpp
	modified:   src/compiler/translator/ImmutableString_autogen.cpp
	modified:   src/compiler/translator/ParseContext_ESSL_autogen.h
	modified:   src/compiler/translator/ParseContext_complete_autogen.h
	modified:   src/compiler/translator/SymbolTable_ESSL_autogen.cpp
	modified:   src/compiler/translator/SymbolTable_autogen.cpp
	modified:   src/compiler/translator/SymbolTable_autogen.h
	modified:   src/compiler/translator/builtin_function_declarations.txt
	modified:   src/compiler/translator/tree_util/BuiltIn_ESSL_autogen.h
	modified:   src/compiler/translator/tree_util/BuiltIn_complete_autogen.h
	modified:   src/tests/compiler_tests/ImmutableString_test_ESSL_autogen.cpp
	modified:   src/tests/compiler_tests/ImmutableString_test_autogen.cpp

no changes added to commit (use "git add" and/or "git commit -a")
```