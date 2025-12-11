#include<stdio.h>
#include<string.h>
int main()
{
    struct student_details
    {
        char name[20] ;
        char reg_no[20];
        char course[29];
        int year;
        int semester;
    } stud1;
   
    
    
   printf("Enter your name:\n");
    scanf("%c",&stud1.name[29]);
   printf("Enter course you are pursuing:\n");
   scanf("%c",&stud1.course[29]);
   printf("Enter your registration number:\n");
    scanf("%c",&stud1.reg_no[20]);
    printf("Enter your year of study:\n");
    scanf("%i",&stud1.year);
    printf("Enter the semester you are in:\n");
    scanf("%i",&stud1.semester);

printf("Name:%c\n",stud1.name[29]);
printf("Course:%c\n",stud1.course[29]);
printf("Registration number:%c\n",stud1.reg_no[20]);
printf("Year of study:%i\n",stud1.year);
printf("Semester:%i\n",stud1.semester);

 return 0;
}