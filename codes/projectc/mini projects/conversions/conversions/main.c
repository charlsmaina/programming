#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=21;

    int b;
    float c=15.55;
    float d;
    b=c;
    printf("b= %i\n",b);//conversion from float to integer.the decimal numbers are truncated
    d=a;
    printf("d= %f\n",d);
    d=a/2;
    //when a defined  integer is divided with an integer and expected result is float only the number before the decimal point is considered.the rest are zeroes
    printf("d= %f\n",d);
    d=c/3;
    printf("d= %f\n",d);
    d=(float)a/2;//type cast operator
    printf("d= %f\n",d);
    //Any operation between two values in C is performed as a floating-point operation if either value is a floating-point variable or a constant.
   char y, x;
    y = 'x';
    x = y;
    printf ("x = %c\n",x);
    int z =4;
    printf("Z raised to z= %i",z*10*2*2);
    return 0;

}
