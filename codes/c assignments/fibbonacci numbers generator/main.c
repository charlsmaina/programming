#include <stdio.h>
#include <stdlib.h>
//reg number:ENE212-0087/2021
//name Kinyua Charles Maina


int main()
{
    int range;

    printf("Enter up to which you want to generate the fibbonaci numbers:\n");

    scanf("%i",&range);

    int fibbonaci_numbers[range];
    fibbonaci_numbers[0]=0;
    fibbonaci_numbers[1]=1;

    for(int n=2;n<=range;n++)
        fibbonaci_numbers[n]=fibbonaci_numbers[n-1]+fibbonaci_numbers[n-2];

    for (int i=0;i<=range-1;i++)
        printf("%i\n",fibbonaci_numbers[i]);




    return 0;
}
