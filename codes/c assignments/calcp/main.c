#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
double square_meters_to_square_kilometers(double area_in_sq_meters);
double square_meters_to_hectares(double area_in_sq_meters);
double square_meters_to_square_cm(double area_in_sq_meters);
double square_meters_to_acres(double area_in_sq_meters);

double square_meters_to_square_yard(double area_in_sq_meters);
double square_meters_to_square_foot(double area_in_sq_meters);
double square_meters_to_square_inch(double area_in_sq_meters);
double square_meters_to_square_mile(double area_in_sq_meters);

int main()
{
    int square_meters=1;
    int square_km=2;
    int hectares=3;
    int square_cm=4;
    int acres=5;
    int square_yard=6;
    int square_foot=7;
    int square_inch=8;
    int square_mile=9;
    int value;
    int units_1;


printf("Enter value of the quantity:\n");
scanf("%i",&value);
printf("***\n---\n***\n");

printf("**Choose unit of measuremt for the value you entered**:\ni.e* choose a letter an index for the corresponding unit\n.\n:square_meters=  1 \n:square_km=   2 \n:hectares=    3 \n:square_cm=   4\n:acres=       5\n:square_yard= 6 \n:square_foot= 7\n:square_inch= 8\n:square_mile= 9\nEnter the number corresponding to unit chosen:\n");
scanf("%i",&units_1);
printf("Chosen unit=:%i",units_1);

if(units_1==1)
    printf("\n:%i squared",value);
}
