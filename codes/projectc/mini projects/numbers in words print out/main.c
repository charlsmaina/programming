#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int number,range,num;
    int rem,n,power;
    int num2,rem2;

    int p2;


    printf("Enter range:\n");
    scanf("%i",&n);


    printf("Enter number:\n");
    scanf("%i",&number);





    power=pow(10, n-1);

    num=number/power;
    //printf("num: %i\npower:%i\n",num,power);


   for(range=n;range>=3;range--)

   {

       if (num==0)
       {
        printf(" Zero\n");
          power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
       }

 if (num==1)
        {
          printf(" One\n");
          power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);


        }


        else if(num==2)
        {
        printf(" two");
       power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
  // printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);


        }


         else if(num==3)
                 {
                     printf(" " "three ");
                 power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);

                 }


         else if(num==4)
         {
             printf("" "four");
          power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);

         }

           else if(num==5)
           {
            printf(" five  ");
            power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);

           }

         else if(num==6)

         {
            printf(" six");
            power=pow(10,(range-1));

          // printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);

         }


         else if(num==7)
         {
         printf(" "  "seven" );
         power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);

         }

         else if(num==8)
         {
         printf(" "  "eight" );
         power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);

         }


         else if(num==9)
         {
        printf(" "  "nine" );
         power=pow(10,(range-1));

           //printf("\npower:%i\n",power);
           rem=number%power;
           num=rem/(power/10);
   //printf("num:%i\nrem:%i\nrange:%i\n",num,rem,range);

         }


   }

       //printf("\nWhats up!!1");

       //range2=2;
       //printf("\nrange:%i\n",range);

       if(range==2)
       {
         p2=pow(10,(2));
        num=number%p2;
        rem=num % 10;
       //printf("num:%i\n rem:%i\n",num,rem);
       num2=num/10;


          if (num2==1)
         {
           printf("" " One");
            //range--;

         }

        else if(num2==2)
                    {printf(" two");
            //range--;
        }
         else if(num2==3)
        {
            printf( " three");
            //range--;
        }
         else if(num2==4)
        {
            printf("" " four");
            //range--;
        }
         else if(num2==5)
        {
            printf(" five");
            //range--;
        }
         else if(num2==6)
        {
            printf("six");
            //range--;
        }
         else if(num2==7)
        {
            printf(" seven");
            //range--;
        }
         else if(num2==8)
        {
            printf("" "eight");
            //range--;
        }
         else if(num2==9)
        {
            printf(" nine");
            //range--;

        }

//printf("rem:%i",rem);
printf(" ");
 switch(rem)
            {
      case 0:
      printf(" zero");
      break;

      case 1:
      printf(" One");
      break;

      case 2:
      printf(" two");
      break;

      case 3:
      printf(" three");
      break;

      case 4:
      printf("four");
      break;

      case 5:
      printf(" five");
      break;

      case 6:
      printf(" six");
      break;

      case 7:
      printf(" seven");
      break;

      case 8:
      printf(" eight");
      break;

      case 9:
      printf(" nine");
      break;

      default:
        printf("Error on input:\n");
        break;
            }

            }
     else if(range==1);
      {
        switch(rem)
            {
      case 0:
      printf(" zero");
      break;

      case 1:
      printf(" One");
      break;

      case 2:
      printf(" two");
      break;

      case 3:
      printf(" three");
      break;

      case 4:
      printf("four");
      break;

      case 5:
      printf(" five");
      break;

      case 6:
      printf(" six");
      break;

      case 7:
      printf(" seven");
      break;

      case 8:
      printf(" eight");
      break;

      case 9:
      printf(" nine");
      break;

      default:
        printf("Error on input:\n");
        break;
            }
      }



    printf("\n\n!!");

    return 0;
}
