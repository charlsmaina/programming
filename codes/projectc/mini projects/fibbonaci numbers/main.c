#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,range;

    printf("Enter range:\n");
    scanf("%i",&range);

    int Fibonacci[range];

    Fibonacci[0] = 0;
    Fibonacci[1] =1 ;



    for(i = 2;i < range;++i)
       Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];


    for(i=0; i < range;++i)

        printf("%i\n",Fibonacci[i]);


    return 0;
}
