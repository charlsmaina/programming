#include <stdio.h>

//making decisions

//we use the if ,switch statements and the conditional operator in c
//if statement format
   //if (expression)
      //program expression...the if statement is used to stipulate the execution of  program statements based of a specified condition

      //a program to calculate the average for grades scored and the number of failures;

      int main()
      {
        int subjects;
        int total=0;
        int failures=0;
        int count;
        int score;
        float average;
        char Subject;

        printf("Enter the number of subjects:\n")  ;
        scanf("%i",&subjects);

        for(count=1;count<=subjects;count++)
        {
            printf("Enter unit :\n");
            scanf("%s",&Subject);

            printf("Enter the score for %c:\n",Subject);
            scanf("%i",&score);

            printf("The score for %c is %i\n",Subject,score);
            total+=score;
            printf("\n\n");

            if(score<65)
                failures++;
        }

        average=(float)total/subjects;
        printf("Average grade :%fs\nNumber of failures:%i\n",average,failures);
        int number_to_test, remainder;
printf ("Enter your number to be tested: ");
scanf ("%i", &number_to_test);
//remainder = number_to_test % 2;
if ( number_to_test % 2==0 )
printf ("The number is even.\n");
else
printf ("The number is odd.\n");

        return 0;

     }
