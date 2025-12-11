#include <stdio.h>
#include <stdlib.h>

int main()
//the number of dots it takes to form a triangle containing n rows is the sum of the numbers from 1 to n
//this sum is known as triangular number
{
    int triangular_number;
    int counter;
    int number;
    printf("Enter a number you want to calculate the triangular number for:\n");
    scanf("%i",&number);
    //The first argument to scanf is the format string and is very similar to the format string used by printf. In this case, the format string doesn’t tell the system what types of values are to be displayed but rather what types of values are to be read in from the terminal. Like printf, the %i characters are used to specify an integer value

    //The second argument to the scanf routine specifies where the value that is typed in by the user is to be stored.The & character before the variable number is necessary in this case.



    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf("n          Sum from one to n\n");
    printf("-----      ---------------\n");
    triangular_number=0;

    for(counter=0;counter<=number;counter++)
        {
            triangular_number+=counter;
        printf("%2i          %i\n",counter,triangular_number);

        //2i is for field width specification .it tells the printf routine that not only do you want tpo display the value of an interger at that particular point ,but you want also the size of the integer to be dispayed to take two columns.
        //right justification
    }
       //scanf routine allows the user to enter/type values into the program

    //The general format of the for statement is as follows:
    //for ( initial_expression; loop_condition; loop_expression )
    //program statement;
    //The relational operators have lower precedence than all arithmetic operators.
   return 0;
}

