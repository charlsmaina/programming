#include <stdio.h>
#include <stdlib.h>
//is done by simply listing the initial values of the array, starting from the first element.Values in the list are separated by commas and the entire list is enclosed in a pair of braces.
//it is not a must to initialize the whole arry ,just initialize the first elements and the rest are set to zero;
//By enclosing an element number in a pair of brackets, specific array elements can be initialized in any order.
//example.    marks[7]={[3]=50,[2]=77,[1]=79,}...initializes element in index 3 to contain 50,element in inex 2 to contain 77,etc.

//Unfortunately, C does not provide any shortcut mechanisms for initializing array elements.That is, there is no way to specify a repeat count, so if it were desired to initially set all 500 values of sample_data to 1, all 500 would have to be explicitly spelled out. In such a case, it is better to initialize the array inside the program using an appropriate for loop.

int main()
{
    int i;
    int table ,range ;

    printf("Enter table to generate:\n");
    scanf("%i",&table);
    printf("Up to what number:\n");
    scanf("%i",&range);
    int array_tvalues[range];
    printf("\n");

    for(i=0;i<=range;i++)
        array_tvalues[i]=i*table;
        for(i=0;i<range;i++)
    printf("%i*%i=%i\n",table,i,array_tvalues[i]);

    // we also have character arrays;
    char word[]={'h','a','a','h','h'};
    for(i=0;i<6;i++)
        printf("%c",word[i]);

    //The most notable point in the preceding program is the declaration of the character array word.There is no mention of the number of elements in the array.The C language allows you to define an array without specifying the number of elements. If this is done, the size of the array is determined automatically based on the number of initialization elements.

    //This approach works fine so long as you initialize every element in the array at the point that the array is defined. If this is not to be the case, you must explicitly dimension the array

    //In the case of using index numbers in the initialization list the largest index number specified sets the size of the array.

    return 0;
}
