#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int number;
    int counter;
    int triangular_number;
    int n;
    for ( counter=1; counter<=5; counter++)
    {
        printf("Enter the number you want to calculate the triangular number for:");
        scanf("%i", &number);

        triangular_number = 0;
        for(n=1;n<=number;n++)
          triangular_number += n;

            printf("Triangular number of %i is %i\n",number,triangular_number);


    }
    //When writing a for loop, you might discover that you have more than one variable that you want to initialize before the loop begins or more than one expression that you want to evaluate each time through the loop.

//You can include multiple expressions in any of the fields of the for loop, provided that you separate such expressions by commas.

//Just as the need might arise to include more than one expression in a particular field of the for statement, the need might arise to omit one or more fields from the statement.This can be done simply by omitting the desired field and marking its place with a semicolon

//A for loop that has its looping condition field omitted effectively sets up an infinite loop; that is, a loop that is theoretically executed forever. Such a loop can be used provided there is some other means used to exit from the loop (such as executing a return, break, or goto statement

//You can also declare variables as part of your initial expression inside a for loop.This is done using the normal ways you have defined variables in the past. For example, the following can be used to set up a for loop with an integer variable counter both defined and initialized to the value 1:for ( int counter = 1; counter <= 5; ++counter)  The variable counter is only known throughout the execution of the for loop (it’scalled a local variable) and cannot be accessed outside the loop


    return 0;
}
