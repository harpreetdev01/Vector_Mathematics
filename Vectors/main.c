#include <stdio.h>
#include "vector.h" // why "" and not <>

int main(void)
{
    vec3_t a = { 2.0, 3.0, -4.0 };
    vec3_t b = { -2.0, 1.4, -1.0 };

    float a_length = vec3_length(a);
    float b_length = vec3_length(b);

    printf("vector A's length: %f", a_length);
    printf("vector B's length: %f", b_length);

    return 0;
}