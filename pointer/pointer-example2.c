#include <stdio.h>

float add1(float v)
{
    v = v + 1.0f;
    return v;
}

void add2(float *v)
{
    *v = *v + 1.0f;
}

int main()
{
    float a = 0.0f;
    printf("%f\n", a);

    a = add1(a);
    printf("%f\n", a);

    add2(&a);
    printf("%f\n", a);
    return 0;
}
