#include <stdio.h>
#include <stdlib.h>

int addition_function(int a,int b);

addition_function(a,b)
{
  int result= a+b;
  return result;
}
int subtraction_function(int a,int b);

subtraction_function(a,b)
{
    int result = a-b ;
    return result;
}


int main()
{

  char sign;
  int a,b;
  printf("Enter two numbers:\n");
  scanf(" %i%i",&a,&b);
  printf("Enter operation to be performed...\n i.e (-for subtraction and + for addition:)\n");

  scanf(" %c", &sign);
  printf("%c",sign);


  if (sign=='+')
  printf("The sum of %i and %i is %i :",a,b,addition_function(a,b));

  else if(sign=='-')
    printf("The difference  of %i and %i is %i :",a,b,subtraction_function(a,b));

    return 0;
}
