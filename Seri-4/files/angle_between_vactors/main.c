#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.142857

/* caculate angle between two vectors :) */

/* caculation dot production function => a.b */
float dot_production(float x1 , float y1 , float z1 , float x2 , float y2 , float z2){
    float result = (x1*x2) + (y1*y2) + (z1*z2);
    return result;
}

/* calculation lenght of vector function  +> |a| */
float vector_length(float x,float y,float z){
    float length = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    return length;
}

int main()
{
    float x1,x2,y1,y2,z1,z2;

    printf("Enter vectors:\nfor example : (x,y,z),(a,b,c)\n");
    scanf("(%f,%f,%f),(%f,%f,%f)",&x1,&y1,&z1,&x2,&y2,&z2);

    float v1_length = vector_length(x1,y1,z1);
    float v2_length = vector_length(x2,y2,z2);

    float angle = acos(dot_production(x1,y1,z1,x2,y2,z2) / ( v1_length * v2_length ));
    printf("angle between (%.2f,%.2f,%.2f) , (%.2f,%.2f,%.2f) : %.2f'\n",x1,x2,y1,y2,z1,z2,(angle*180/PI));
    return 0;
}
