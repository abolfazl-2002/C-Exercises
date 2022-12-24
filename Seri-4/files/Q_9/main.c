#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int get_num(){
    int num = 0;

    printf("Please enter ur number: ");
    int i;
    for (i = 3; i >0; i--)
    {
        num =  num + ((getchar()-48)*pow(10,i-1));
    }

    return num;
}

int put_num(int num){
    int i;
    for(i=3;i>0;i--){
        int n = (num/pow(10,i-1))-((int)(num/pow(10,i))*10);
        putchar(n+48);
        n = 0;
    }
    return 0;
}

int main()
{
    put_num(get_num());
    return 0;
}
