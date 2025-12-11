#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    int rightd;
    char op;
    op='-';

    printf("Enter a number:\n");
    scanf("%i",&num);
    int n=1;
    while(true)
{


    if(num<0)

    {
        rightd=num%10;
        printf("%i",-rightd);
        num=num/-10;
        n++;

    }
    else if (num>0)
    {
        rightd=num%10;
        printf("%i",rightd);
        num=num/10;
        n++;
    }
    else if(num==0)
    {
    printf("%c",op);
    break;
    }


}



    return 0;
}
