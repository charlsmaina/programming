#include <stdio.h>
#include <stdlib.h>

int main()
{

 char  c;
printf("Enter a character:\n");
scanf("%c",&c);

if ((c>='a' && c<='z')|| (c >='A' && c<='Z'))
printf("The character is an alphabet.\n");
else if (c>='0' && c <='9')
printf("The character is a digit.\n");
else
    printf("The character is a special character.\n");

    // a simple calculator
float var1,var2;
char op ;

printf("Enter expression\n:");
scanf("%f %c %f",&var1,&op,&var2);

if (op=='+')
    printf("sum:%f\n",var1+var2);

    else if (op=='*')
        printf("Multiplacation:%f\n",var1*var2);
    else if(op=='-')
    printf("Subtraction:%f\n",var1-var2);
    else if (op == '/')
        printf("Division:%f",var1/var2);

         *
         */


        //when the scanf function is reading a character with the %c format characters, the next character on the input, even if it is a blank space, is the character that is read. However, it should be noted that, in general, the scanf function always ignores leading spaces when it is reading in either a decimal or floating-point number

        //Trying to predict the ways that a program can fail or produce unwanted results and then taking preventive measures to account for such situations is a necessary part of producing good, reliable programs.


        //switch statement

        //it is a statement in c that is used to make decisions where a particular case exist only after comparison based on an expression,values or variables.each case must have a break statement .it is advisable to provide a default case to cater for the possibility of none of the cases being indentified after a comparison.

        // If a case is found whose value is equal to the value of expression, the program statements that follow the case are executed. no need to include braces when there is more than one program statements .The break statements marks the end of each case.

        //The special optional case called default is executed if the value of expression does not match any of the case values.

float a;
float b;
char o;
printf("Enter your expression\n  : ");
scanf("%f %c %f",&a,&o,&b);

switch (o)
{
    case '+':
    printf("Addition: %.2f\n",a+b);
    break ;

    case '-':
        printf("Subtraction: %.2f\n",a-b);
        break ;

    case '*':
    case 'x':
        printf("Multiplacation: %.2f\n",a*b);
        break ;

    case '/':
        if(b==0)
        printf("Math error:Division by zero ");
        else
        printf("Division: %.2f\n",a/b);
        break ;

    default:
        printf("Unknown operation:");
        break ;

        //When writing a switch statement, bear in mind that no two case values can be the same. However, you can associate more than one case value with a particular set of program statements.This is done simply by listing the multiple case values (with the keyword case before the value and the colon after the value in each case) before the common statements that are to be executed
}




   return 0;
}


