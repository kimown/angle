#include <stdio.h>


int main(int argc, char* argv[]) {
    printf("I am form headless_example2.cc\n");
    return 0;
}



// rm -rf out/foo
// mkdir -p out/foo
// echo 'import("//build/args/headless.gn")' > out/foo/args.gn
// gn gen out/foo
// ninja -C out/foo headless_example2
// ./out/Debug/headless_example2