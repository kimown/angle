uniform mediump float u;
void main()
{
    const highp float a = 4096.5;
    mediump float b = fract(a + u);
    gl_FragColor = vec4(b);
}