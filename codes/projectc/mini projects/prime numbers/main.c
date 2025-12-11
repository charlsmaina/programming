#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)

{
 int range ;
int number;
int increment_numbers;
bool isprime;

printf("Enter the range:\n");
scanf("%i",&range);

for(number=2;number<=range ; number++)
{
      isprime=true;
    for(increment_numbers=2;increment_numbers<number;increment_numbers++)

        if (number % increment_numbers == 0)
        isprime = false ;
        if (isprime!=false)

        printf("%i :is prime\n",number);
       else
           printf("%i :not prime\n",number);


            //boolean variables can be looked as flag variables

            //Often, variables that are used in such a manner are referred to as flags.A flag typically assumes only one of two different values. Furthermore, the value of a flag is usually tested at least once in the program to see if it is “on” (TRUE) or “off” (FALSE), and some particular action is taken based upon the results of the test

}

//the conditional operator
//the conditional operator is a ternary operator; that is, it takes three operands.The two symbols that are used to denote this operator are the question mark (?) and the colon (:).The first operand is placed before the ?, the second between the ? and the :, and the third after the :

//The general format of the conditional operator is ,   condition ? expression1 : expression2

//where condition is an expression, usually a relational expression, that is evaluated first whenever the conditional operator is encountered. If the result of the evaluation of condition is TRUE (that is, nonzero), then expression1 is evaluated and the result of the evaluation becomes the result of the operation. If condition evaluates FALSE (that is,zero), then expression2 is evaluated and its result becomes the result of the operation.

//The conditional operator is most often used to assign one of two values to a variabledepending upon some condition.

// the precedence of the conditional operator is very low—lower, in fact, than all other operators besides the assignment operators

//the conditional operator associates from right to left
//The conditional operator is very handy when writing preprocessor macros in Cand the comma operator.

 return 0;
}
