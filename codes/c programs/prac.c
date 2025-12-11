#include<stdio.h>
#include<string.h>
int main()
{

char N ;
char *name=&N;
printf("Address of char:%i",&N);
printf("Adres of ptr:%i",&*name);
return 0;
}



