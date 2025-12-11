#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arraynums[10],i,num;
   for(i=0;i<10;i++)
    arraynums[i]=0;
    printf("num:          value:\n");
    printf("_______________________\n");
   for(num=0;num<10;num++)

   printf("%i               %i\n",num,arraynums[num]);

   //counters:
   int responses;


   int rating;
   int ratings[11];
   int rate;

    for(rate=1;rate<=10;rate++)
        ratings[rate]=0;

   printf("Enter no of responses required:\n");

   scanf("%i",&responses);
   printf("Okay ! Enter your ratings:\n");

  for(int counter=1;counter<=responses;counter++)
  {
      if (counter<=responses)
      {
       scanf("%i",&rating);
       if (rating <1 || rating > 10)
        {
         printf("Rating out of bound:\n");
         counter--;
         continue;
        }
        else
       ++ratings[rating];

        if(counter==responses)
          printf("Done!.\nThank you  for your ratings!!\n");

      }


  }
     printf("\n");
     printf("Rating              Number of ratings\n");
      printf("_______________________________________\n");
     for(rate=1;rate<=10;rate++)
        printf("%2i                  %i\n",rate,ratings[rate]);

    return 0;
}
