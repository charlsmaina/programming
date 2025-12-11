#include <stdio.h>

void convert(int from_unit, int to_unit, double value)
{
    double result;
    if (from_unit == 1)
        {
        switch (to_unit) {
            case 1:
                result = value;
                printf("Area = %.10f square_meters\n", result);
                break;
            case 2:
                result = value / 1000000;
                printf("Area = %.10f square_kilometres\n", result);
                break;
            case 3:
                result = value / 10000;
                printf("Area = %.10f hectares\n", result);
                break;
            case 4:
                result = value * 1000;
                printf("Area = %.10f square_cm\n", result);
                break;
            case 5:
                result = value / 4046.86;
                printf("Area = %.10f acres\n", result);
                break;
            case 6:
                result = value * 1.19599;
                printf("Area = %.10f square yards\n", result);
                break;
            case 7:
                result = value / 0.0000003861 ;
                printf("Area = %.10f square miles\n", result);
                break;

        }
    }
    else if(from_unit==2)
    {
        switch (to_unit) {
            case 1:
                result = value*1000000;
                printf("Area = %.10f square_meters\n", result);
                break;
            case 2:
                result = value;
                printf("Area = %.10f square_kilometres\n", result);
                break;
            case 3:
                result = value * 10000;
                printf("Area = %.10f hectares\n", result);
                break;
            case 4:
                result = value * 10000000;
                printf("Area = %.10f square_cm\n", result);
                break;
            case 5:
                result = value * 247.1054;
                printf("Area = %.10f acres\n", result);
                break;
            case 6:
                result = value * 1195990;
                printf("Area = %.10f square yards\n", result);
                break;
            case 7:
                result = value * 0.386102 ;
                printf("Area = %.10f square miles\n", result);
                break;

        }
    }
    else if(from_unit==3)
    {
        switch (to_unit) {
            case 1:
                result = value*10000;
                printf("Area = %.10f square_meters\n", result);
                break;
            case 2:
                result = value*0.01;
                printf("Area = %.10f square_kilometres\n", result);
                break;
            case 3:
                result = value ;
                printf("Area = %.10f hectares\n", result);
                break;
            case 4:
                result = value * 100000000;
                printf("Area = %.10f square_cm\n", result);
                break;
            case 5:
                result = value * 2.471054;
                printf("Area = %.10f acres\n", result);
                break;
            case 6:
                result = value * 11959.90;
                printf("Area = %.10f square yards\n", result);
                break;
            case 7:
                result = value * 0.00386102 ;
                printf("Area = %.10f square miles\n", result);
                break;

        }
    }
    else if(from_unit==4)
    {
        switch (to_unit) {
            case 1:
                result = value*0.0001;
                printf("Area = %.10f square_meters\n", result);
                break;
            case 2:
                result = value*0.0000000001;
                printf("Area = %.10f square_kilometres\n", result);
                break;
            case 3:
                result = value * 0.00000001;
                printf("Area = %.10f hectares\n", result);
                break;
            case 4:
                result = value ;
                printf("Area = %.10f square_cm\n", result);
                break;
            case 5:
                result = value * 0.0000000247105;
                printf("Area = %.10f acres\n", result);
                break;
            case 6:
                result = value * 0.00012;
                printf("Area = %.10f square yards\n", result);
                break;
            case 7:
                result = value * 0.0000000000386102 ;
                printf("Area = %.10f square miles\n", result);
                break;

        }
    }
    else if(from_unit==5)
    {
        switch (to_unit) {
            case 1:
                result = value*4046.856;
                printf("Area = %.10f square_meters\n", result);
                break;
            case 2:
                result = value*0.004047;
                printf("Area = %.10f square_kilometres\n", result);
                break;
            case 3:
                result = value * 0.404686;
                printf("Area = %.10f hectares\n", result);
                break;
            case 4:
                result = value * 40468564;
                printf("Area = %.10f square_cm\n", result);
                break;
            case 5:
                result = value ;
                printf("Area = %.10f acres\n", result);
                break;
            case 6:
                result = value *4840;
                printf("Area = %.10f square yards\n", result);
                break;
            case 7:
                result = value * 0.001563 ;
                printf("Area = %.10f square miles\n", result);
                break;

        }
    }
    else if(from_unit==6)
    {
        switch (to_unit)
        {
            case 1:
                result = value*0.836127;
                printf("Area = %.10f square_meters\n", result);
                break;
            case 2:
                result = value*0.000000836127;
                printf("Area = %.10f square_kilometres\n", result);
                break;
            case 3:
                result = value * 0.000084;
                printf("Area = %.10f hectares\n", result);
                break;
            case 4:
                result = value * 8361.274;
                printf("Area = %.10f square_cm\n", result);
                break;
            case 5:
                result = value * 0.000207;
                printf("Area = %.10f acres\n", result);
                break;
            case 6:
                result = value;
                printf("Area = %.10f square yards\n", result);
                break;
            case 7:
                result = value * 0.000000322830579 ;
                printf("Area = %.10f square miles\n", result);
                break;

        }
    }
    else if(from_unit==7)
    {
        switch (to_unit)
         {
            case 1:
                result = value*2589988;
                printf("Area = %.10f square_meters\n", result);
                break;
            case 2:
                result = value*2.589988;
                printf("Area = %.10f square_kilometres\n", result);
                break;
            case 3:
                result = value * 258.9988;
                printf("Area = %.10f hectares\n", result);
                break;
            case 4:
                result = value * 25899881103;
                printf("Area = %.10f square_cm\n", result);
                break;
            case 5:
                result = value * 640;
                printf("Area = %.10f acres\n", result);
                break;
            case 6:
                result = value * 3097600;
                printf("Area = %.10f square yards\n", result);
                break;
            case 7:
                result = value  ;
                printf("Area = %.10f square miles\n", result);
                break;

        }
    }


}

int main() {
    int from_unit, to_unit;
    double value;

    printf("Enter the value for area:\n");
    scanf("%lf", &value);

    printf("Choose units from:\n");
    printf("1. Square_meters\n");
    printf("2. Square kilometers\n");
    printf("3. Hectares\n");
    printf("4. Square_cm\n");
    printf("5. acres\n");
    printf("6. square_yard\n");
    printf("7. square_mile\n");
    printf("Enter your choice:\n");

    scanf("%d", &from_unit);

    printf("Enter units to convert to:\n");
    printf("Choose from:\n");
    printf("1. Square_meters\n");
    printf("2. Square kilometers\n");
    printf("3. Hectares\n");
    printf("4. Square_cm\n");
    printf("5. acres\n");
    printf("6. square_yard\n");
    printf("7. square_mile\n");

    printf("Enter your choice:\n");
    scanf("%d", &to_unit);
    convert(from_unit,to_unit,value);

    return 0;
}
