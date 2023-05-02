./out/Debug/angle_unittests --gtest_filter=*oggle*


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
