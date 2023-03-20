
#include "libANGLE/Display.h"

int main(int argc, char* argv[]) {
    printf("I am form headless_example2.cc\n");

    {

        EGLAttrib dispattrs[] = {EGL_PLATFORM_ANGLE_TYPE_ANGLE, EGL_PLATFORM_ANGLE_TYPE_DEFAULT_ANGLE, EGL_NONE};
        EGLDisplay mDisplay              = eglGetPlatformDisplay(EGL_PLATFORM_ANGLE_ANGLE,
                                                      reinterpret_cast<void *>(EGL_DEFAULT_DISPLAY), dispattrs);


        EGLint major;
        EGLint minor;

        EGLBoolean eglInitialized = eglInitialize(mDisplay, &major, &minor);

        printf("%d %d %d\n", major, minor, eglInitialized);
        printf("EGL vendor string: %s\n", eglQueryString(mDisplay, EGL_VENDOR));


        return 0;
    }
    return 0;
}



// rm -rf out/foo
// mkdir -p out/foo
// echo 'import("//build/args/headless.gn")' > out/foo/args.gn
// gn gen out/foo
// ninja -C out/foo headless_example2
// ./out/Debug/headless_example2