#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//early programmer had the task of coding machine instructions into binary.The programmer had also to explicitly assign and reference any storage locations inside the computer memory by a specific number or memory addresses
//modern programming languages allows you to focus on solving the particular problem at hand rather than worrying about specific machine codes and memory locations.
//variable names are symbolic names used to store values to be used in a programs computations and the computation results
//int -can contain integral values only...that is numbers with no decimal points
//floats - stores floating point numbers(numbers with decimal places)
//double - stores floating point numbers with the advantage of storing twice the precision of floats
//_bool data type...stores 1 or 0.depicts yes or no situations...
//char ...stores a single character
//constant--any number,single character,or character string
//constant expressions..expressions consisting entirely of constant values
//int data type
//integers are not always expressed in decimal format.they can be expressed in octal(base 8)
//if the first integer value is a zero the value is said to be expressed in octal
//to display integers values in octal notation when using the print function ,we use the format specifier (%o)..in this case the leading zero will not be displayed.
//to display the leading zero we can use the format specifier (%#o)
int a;
a=0177;
int main()


{
    printf("Value of a in octal notation is %#o \n",a);

//any integer value preceded by a 0 zero and then followed by a an x(caps or lowercase) denotes a value expressed in hexadecimal format(base 16)
// to display hexadecimal numbers the format specifier(%x) is used ..it displays the number without the leading 0 and x
//to display the number with the starting 0 and x the format specifier (%#X) is used

//to display a number in scientific format,the format specifier (%e) is used
//A hexadecimal floating constant consists of a leading 0x or 0X, followed by one or more decimal or hexadecimal digits, followed by a p or P, followed by an optionally signed binary exponent. For example, 0x0.3p10 represents the value 3/16 × 2^10 = 192

//all floating point constants are taken as doubles by the c compiler.to explicitly a float constant append f or F to the end of the number
//a _Bool data type stores a 1 or a 0
//the standard header file <stdbool.h> is used to work with boolean variables. which defines the values bool ,true, and false

int integerVar =100;
float floatingVar = 331.54;
double doubleVar = 8.44e+11;
char charVar='W'  ;
_Bool boolVar = 0 ;
printf("integerVar = %i\n",integerVar);
printf("floatingVar = %e\n",floatingVar);
printf("doubleVar = %e\n",doubleVar);
printf("doubleVar = %g\n",doubleVar);
printf("charVar = %c\n",charVar);
printf("boolVar = %i\n",boolVar);


//long specification in variables declaration means that the declared variable i have an extended range and the range of extension depends on a particular computer system

//int and long int both have the same range of up to 32 bits wide
//to display a long variable,l is appended before the specific format specifier used to denote the extended variable.
//long long is usually around 64 bits .two l's are used in the print f string to display long long variables .
//short denotes short integers of up to sixteen bits
//the letter h is placed before any of the integer format specifier.ie %hi,%ho,%hx
//The letter U placed at the end of an integer constant indicates unsigned constant
//20000ul tells the compiler that the integer 2000 is unsigned and long
//an integer constant that is not followed by any of the letters u,U,l,L and that is too large to fit into a normal-sized int is treated as an unsigned int by the compiler.If it is too large to fit in the unsigned int the compiler treats it as a long int .if still it is too large to fit in the long int,it is treated as unsigned long long int
    return 0;
}

