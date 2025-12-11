#include <stdio.h>
#include <stdlib.h>

int main()

{    int a,b;
float result;
    printf("Enter two integers:\n");
    scanf("%i %i",&a,&b);

    if (b==0)
    printf("Error:Division by zero.\n");
    else
    result = (float)a/b;
    printf("%.3f",result);

     return 0;
}
