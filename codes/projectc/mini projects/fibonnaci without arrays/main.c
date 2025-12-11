#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fib2=0;
   int fib1=1;
   int fib0;
   int i;

   printf("%i\n%i\n",fib2,fib1);


   for (i=1;i<=13;i++)
   {
       fib0=fib2+fib1;
       printf("%i\n",fib0);
       fib2=fib1;
       fib1=fib0;

   }
   //using array

   printf("\n!!!!!!!!!!!!!!!\n");
   printf("Using array\n");
    int array[15];
    int n;
    int num;
    array[0]=0;
    array[1]=1;

     for (n=2;n<15;n++)


     array[n]=array[n-2]+array[n-1];

    for(n=0;n<15;n++)
    printf("%i\n",array[n]);






    return 0;
}
