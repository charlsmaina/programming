#include <stdio.h>
#include <stdlib.h>

//program functions provides the mechanism for producing programs that are easy to write, read , understand , debug and maintain

//main is a specially recognized name in the C system that always indicates where the program is to begin execution.You must always have a main

//When a function call is executed,program execution is transferred directly to the indicated function

//arguments increase the flexibility and usefuness of functions(argumentds are the valuse you supply to a function once you call it.

void printMessage (void)

{
printf ("Programming is fun.@@.\n");
}


void calculateTri(int n)
{
   int i;
 int triangularnum = 0;
 for(i=1;i<=n;i++)
    triangularnum+=i;
    printf("Triangular number of %i is: %i\n",n,triangularnum);
    //function prototype declaration .
     //the first line of the function void calculateTri(int n) is known as function prototype declaration.void specifies that the function returns no values.nt n specifies to the compiler that the function takes a single argument of type int .n is known as formal parameter name,it is chosen following the rules for naming of variables
     //after the formal parameter name has been defined it can be used to rfer to the arguments of the function any where in the body of the function
     //the beggining of function defination is indicated by the opening cury braces.

}


int main(void)
{

    for(int i=1;i<=5;i++)
    printMessage();



    //a function to generate triangular numbers:
     int n;
    printf("Enter number to calculate triangular number for:\n");
    scanf("%i",&n);
    calculateTri(n);



    return 0;
}
