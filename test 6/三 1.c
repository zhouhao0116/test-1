#include <stdio.h>
float func (float a, float b);

int main()
{ 
    float x, y;
    float z;
    scanf("%f, %f", &x, &y);
    z = func(x, y);
    printf("z=%f\n", z); 
    return 0;
}

float func (float a, float b)
{ 
    float c;
    c = a * a + b * b;
    return c;
}