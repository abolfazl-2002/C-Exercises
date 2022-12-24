#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float func(float x){
    float result = 0.85*sin(1.9*atan(10*x - 0.96*(10*x - atan(10*x))));
    return result;
}
int main()
{
    float x = 0;
    while(x <= 1.05){
        printf("f(%.2f) = %.2f        f(%.2f) = %.2f\n",x-1,func(x-1),x,func(x));
        x += 0.05;
    }

    return 0;
}
