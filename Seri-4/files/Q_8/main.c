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

int main()
{
    printf("%d\n",get_num());
    return 0;
}
