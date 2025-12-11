#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
   int p;
   int d;
   int rem;
   bool isprime;

    for(p=2; p<=50; ++p)
    {
        isprime =true;

        for(d=2;d<p;++d)

    if(p%d == 0)
    isprime = false;

       if(isprime==true )
        printf("%i\n",p);
        }

    printf("\n done!!\n\n");


    return 0;
}
