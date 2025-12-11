#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
     char s,e,op,spchar;
     int accum,number_to_accum,number;
    float result ;

     printf("Welcome! Ready to go !\n");



       printf("start:\n:");
     scanf("%i %c",&number_to_accum,&spchar);


     if (spchar=='e')
        printf("End of calculations\n:");


     else if (spchar=='s')


     {
        while(true)
        {

        printf("Enter expression:\n:");
        scanf("%i %c",&number,&op);
        accum=number_to_accum;

         if (op != 'e')
         {


        switch(op)

     {
        case 'e':
         printf(" Result = %i \nEnd of calculations\n:Thank you:\n",result);

        case '+':
    result=accum+number;

    printf("Answer :\n:=%.3f\n",result);
    break;

        case '-':
            result=accum-number;
            printf("Answer :\n:=%f\.3n",result);
            break ;

        case '*':
            result=accum*number;
            printf("Answer :\n:=%.3f\n",result);
            break ;

        case '/':
            result=accum/number;
            printf("Answer :\n:=%.3f\n",result);
            break ;

        default:
            printf("Unknown operation !!\n:");

     }
        number_to_accum=result;

         }
         else
         {
             printf("End of calculatiions:\n\n result =: %i ",accum);
             break ;
         }

        }
     }
     else
        printf("Enknown entries: \n");

    return 0;
}
