#include <stdio.h>
#include <stdlib.h>

int main()

{
    //n and n squared
    int n =1;
    int n_squared;

    printf("n          n_squared\n");
    printf("---       ---\n");
    while(n<=13)
    {
        n_squared=n*n;
        printf("%2i          %i\n",n,n_squared);
        n++;
    }
    //table  to generate
    int num;
    int factorial=1;
    printf("num          factorial\n");
    printf("---     ------\n");
    for (num=1;num<=10;num++)

    {
     factorial=factorial*num ;
     printf("%.3i          %i\n",num,factorial);
     //a decimal point before the field width specification has thee effect of adding zeroes in the blank spaces in a case
    }
    //calculating sum of integers
    int nu , last_digit ;
    int total=0;

    printf("Enter any integer number \n:");
    scanf("%i",&nu);
    while(last_digit!=0)
    {
        last_digit=nu%10;
        nu=nu/10;
        total+=last_digit;


    }
    printf("Sum of the number in reverse is :%i\n",total);
    printf("\n");

    int triangular_number,range;

    printf("How many numbers do  you want to find triangular numbers for?:\n");
    scanf("%i",&range);
    for (int n=1; n<=range;n++ )

    {
        int number;

        printf("Enter the number you want to find triangular number for no:\n");
        scanf("%i",&number);

        int num2;
        int tri_number=0;


       for( int num2=1;num2<=number; num2++)

            tri_number+=num2;

        printf("The triangular number of is :%i\n",tri_number);

    }

    return 0;
}
