#include <stdio.h>
#include <stdlib.h>

int main()
//do statement
//for a do statement the program statement (s) must execute for at least once .the loop condition is checked at the end of the end of program statements execution.

//.The syntax of this statement is as follows:


//do
//  program statement
//  while ( loop xpression )


{
    int number,r_digit;

    printf("Enter a number:\n");
    scanf("%i",&number);
    do
    {
      r_digit=number%10;
      printf("%i",r_digit);
      number=number/10;
    }
    while(number!=0);

    printf("\n");
    return 0;

    //break statement is used to break from a loop when a given loop condition is satisfied
    //the program exits out of the loop it is executing and continues with the execution of other
    //program statements


    //the continue statement is used to terminate the execution of statements in a loop.it allows the next round of the loop execution to go ahead.statements appearing after the continue statements are automatically skipped.
}
