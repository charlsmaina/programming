#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //printf("Hello\n:");
    int nextDigit,base;
    const char baseDigits[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int convertedNumber[64];
    long int numberToconvert;

    int index=0;

    printf("Enter number:\n");
    scanf("%ld",&numberToconvert);
    printf("Base to convert to:\n");
    scanf("%i",&base);

    do
    {
        convertedNumber[index]=numberToconvert%base;
        index++;
        numberToconvert=numberToconvert/base;
     }
     while(numberToconvert !=0);

    printf("Converted number:\n");

    for(--index;index>=0;index--)
    {
        nextDigit=convertedNumber[index];
        printf("%c",baseDigits[nextDigit]);

    }
    printf("\n");

    //The compiler allows you to associate the const qualifier with variables whose values will not be changed by the program.That is, you can tell the compiler that the specified variables have a constant value throughout the program’s execution. If you try to assign a value to a const variable after initializing it, or try to increment or decrement it, the compiler might issue an error message, although it is not required to do so. One of the motivations for the const attribute in the language is that it allows the compiler to place your const variables into read-only memory. (Normally, the instructions of your program are also placed into read-only memory.)




    return 0;
}
