#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()

//a prime number is prime if it is not evenly divisible by  any other prime number
//you can test if a number is prime by checking if it is evenly divisible with any other previously generated prime number

// As a further optimization of the prime number generator program, it can be readily demonstrated that any nonprime integer n must have as one of its factors an integer that is less than or equal to the square root of n.This means that it is only necessary to determine if a given integer is prime by testing it for even divisibility against all prime factors up to the square root of the integer

{
    int  p,i,primes[50],primeIndex=2;
    bool isPrime;
    primes[0]=2;
    primes[1]=3;

    for(p=5;p<=50;p+=2)//sets all odd numbers between 5 and 50 .no even numbers are considered because no even number can be a prime number except two which below 5 which is the initial value of p
    {
        //printf("p=%i",p);
        isPrime=true;

        for(i=1;isPrime && p/primes[i]>=primes[i];i++)//checks whether the the values of primes[i] being checked do not exceed the square root of p
{


            //.This loop successively divides the value of p by all ofthe previously generated prime numbers that are stored in the array primes.The index variable i starts at 1 because it is not necessary to test any values of p for divisibility by primes[0] (which is 2).This is true because our program does not even consider even numbers as possible primes. Inside the loop, a test is made to see if the value of p is evenly divisible by primes[i], and if it is, then isPrime is set false.The for loop continues execution so long as the value of isPrime is true and the value of primes[i] does not exceed the square root of p

            if(p % primes[i] == 0) // if a factor of p is found between the value of bool isprime is set to false
            isPrime=false;
}

            if(isPrime == true )
            {

                primes[primeIndex]=p;//the primeIndex was initially set to index two because it is the next free slot in the array since index 0 and 1 had already been taken by 2 and 3 .
                ++primeIndex;
            }


    }
    //printf("\ndone");

    for(i=0;i<primeIndex;i++)
    printf("%i ",primes[i]);





    return 0;
}
