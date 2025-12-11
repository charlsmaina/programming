#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[50] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int i, j;
   for ( j = 0; j < 50; ++j )
          for ( i = 0; i < j; ++i )
          {
              numbers[j] += numbers[i];

          }

             for ( j = 0; j < 50; ++j )
printf ("%i \n", numbers[j]);
printf ("\n");
    return 0;
}
