#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Enter size of array\n:");
    scanf("%i",&size);

    int arraynums[size+1];//declare an array that can hold an extra

    printf("Enter the array elements:\n");

    for(int i=0;i<size;i++)
    {
        printf(">>");
        scanf("%i",&arraynums[i]);
    }

    printf("\nOriginal array is:");

    for(int n=0;n<size;n++)
        printf("%i ",arraynums[n]);

    printf("\nEnter number to insert:\n");
    int num_insert;
    scanf("%i",&num_insert);

    arraynums[size]=num_insert;
     printf("Array after insertion:\n");

    for(int i=0;i<=size;i++)
        printf("%i ",arraynums[i]);

 for (int i = 0; i < size - 1; i++)
 //size-1..coz the last element has already been examined and hence have bubbled to its right place:
    {
    for (int j = 0; j < size - i - 1; j++)
    //size-i-1..to avoid unnecessary comparisons for elements that have been previously sorted.

        {
        if (arraynums[j] > arraynums[j + 1])
        {
            // Swap the elements if they are in the wrong order
            int temp = arraynums[j];
            arraynums[j] = arraynums[j + 1];
            arraynums[j + 1] = temp;
        }
    }
}
   printf("\nArray after sorting:\n");
   for (int i=0;i<=size;i++)
    printf("%i ",arraynums[i]);


        return 0;
}


