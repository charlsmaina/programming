#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rating_counters[11],i,rating;
    for(i=1;i<=10;i++)
        rating_counters[i]=0;

    printf("Enter your rating:\n");

    for(i=1;i<=20;i++)
    {
        scanf("%i",&rating);
        if(rating < 0 || rating > 10)
        {
         printf("Bad response:\n") ;

         continue;
        }

        else
            ++rating_counters[rating];
    }
    printf("Rating    Number of responses: \n");
    printf("______   _______________\n");

    for(i=1;i<=10;i++)
        printf("%2i              %i\n",i,rating_counters[i]);
    return 0;
}
