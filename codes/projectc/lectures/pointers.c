#include <stdio.h>
//store memory addresses
//can be set to null to indicate they are not pointing to any valid memory locatio
int main()
{
  int x=123;
  int* ptr=&x;
  printf("Initial value of X is :%i\n",*ptr);
  printf("Initial value of X is :%i",&ptr);
  
  *ptr=24;
  printf("Modified value of X is :%i\n",*ptr);
  printf("Modified value of X is :%i",&ptr);//displays the memory location

  return 0;

}