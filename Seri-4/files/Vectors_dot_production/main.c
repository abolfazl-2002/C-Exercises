#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* caculate vectors dot production => a.b :) */

/* caculation function */
float dot_production(float x1 , float y1 , float z1 , float x2 , float y2 , float z2){
    float result = (x1*x2) + (y1*y2) + (z1*z2);
    return result;
}

int main()
{
    float x1,x2,y1,y2,z1,z2;

    printf("Enter vectors:\nfor example : (x,y,z),(a,b,c)\n");
    scanf("(%f,%f,%f),(%f,%f,%f)",&x1,&y1,&z1,&x2,&y2,&z2);

    printf("(%.2f,%.2f,%.2f) . (%.2f,%.2f,%.2f) => %.2f",
           dot_production(x1,y1,z1,x2,y2,z2),x1,x2,y1,y2,z1,z2);
    return 0;
}
