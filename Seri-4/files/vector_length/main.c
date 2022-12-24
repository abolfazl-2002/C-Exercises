#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* calculating vector length */

/* calculate function */
float vector_length(float x,float y,float z){
    float length = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    return length;
}

int main()
{
    float num1,num2,num3;

    printf("Enter numbers:(Ex: 2,3,5 )\n");
    scanf("%f,%f,%f",&num1,&num2,&num3);

    printf("vector(%.2f,%.2f,%.2f) length : %.2f\n",num1,num2,num3,vector_length(num1,num2,num3));

    return 0;
}
