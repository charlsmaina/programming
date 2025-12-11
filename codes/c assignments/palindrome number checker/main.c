#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Name:Kinyua Charles Maina
//Reg no :ENE212-0087/2021


void ispalindrome(int num)
 {
     int reversed_num=0;
    int original_number=num;
    int remaider;
      while(num>0)
      {

        remaider=num%10;
        reversed_num=reversed_num*10+remaider;
        num/=10;

      }
      printf(" original number :%i\n",original_number);
      printf("Reversed number :%i\n",reversed_num);

       if(original_number==reversed_num)
       {
        printf("%i is a palindrome:",original_number);
       return 0;
       }

       else
       {
        printf("Not palindrome");
        return 0;
       }

 }

int main()
{
    int num;
printf("Enter a number\n");
scanf("%i", &num);
ispalindrome(num);


   return 0;
}
