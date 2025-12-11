#include <stdio.h>
#include <stdlib.h>
//newton raphshon iteration technique

//The number whose square root you want to obtain is divided by the initial guess and is then added to the value of guess.This intermediate result is then divided by 2.

//The result of this division becomes the new guess for another go-around with the formula. That is, the number whose square root you are calculating is divided by this new guess, added into this new guess, and then divided by 2.

//This result then becomes the new guess and another iteration is performed. Because you don’t want to continue this iterative process forever, you need some way of knowing when to stop. Because the successive guesses that are derived by repeated evaluation of the formula get closer and closer to the true value of the square root, you can set a limit that you can use for deciding when to terminate the process.

//The difference between the square of the guess and the number itself can then be compared against this limit—usually called epsilon (ε). If the difference is less than ε, the desired accuracy for the square root has been obtained and the iterative process can be terminated.

//function to calculate absolute value
   int absoluteValue(int x)
   {
     if (x < 0)
        x = -x;
     return x;
   }
   //function to calculate
   float squareroot(int num)
   {
       const float episilon = .000001;
       float guess = 1.0;

       if (num < 0 )
       {
           printf(" Error:Square root of negative:\n");
           return -1;
       }

       while(absoluteValue(guess*guess-num) >= episilon)
        guess=(num/guess+guess)/2 ;

       return guess;
   }

int main()
{
    int n;

     printf("Enter number to find square root:\n");
     scanf("%i",&n);
     printf("Square root of %i is %f:",n,squareroot(n));
     printf("\n Done!! \n");


    return 0;
}
