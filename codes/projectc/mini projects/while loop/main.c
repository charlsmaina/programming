#include <stdio.h>
#include <stdlib.h>

int main()
//The syntax of this frequently used construct is as follows:
//     while ( expression )
//           program statement
//the expression in braces is evaluated each time before the program statement (s) are executed

//In general, a loop executed a predetermined number of times is a prime candidate for implementation as a for statement.Also, if the initial expression, looping expression, and looping condition all involve the same variable, the for statement is probably the right choice.
{
   //calculating gcd.

   int u,v,temp;
   printf("Enter any two non negative numbers:\n");

   scanf("%i%i",&u,&v);
   while(v!=0)
   {
       temp=u%v;
       u=v;
       v=temp;
   }
   printf("The gcd  is %i ",u);




    return 0;
}
