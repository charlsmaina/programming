#include <stdio.h>

double convert(int from_unit, int to_unit, double value)
{
    long double result;
    if (from_unit == 1)
        {
        switch (to_unit)
        {
            case 1:
                result = value;
                printf("Area = %.4f square_meters\n", result);
                break;
            case 2:
                result = (float)value / 1000000;
                printf("Area = %.4f square_kilometres\n", result);
                break;
            case 3:
                result = (float)value / 10000;
                printf("Area = %4 hectares\n", result);
                break;
            case 4:
                result = (float)value * 1000;
                printf("Area = %.4f square_cm\n", result);
                break;
            case 5:
                result = (float)value / 4046.86;
                printf("Area = %.4f acres\n", result);
                break;
            case 6:
                result = (float)value * 1.1956;
                printf("Area = %.4f square_yards\n", result);
                break;
            case 7:
                result = (float)value * 0.00000038610216;
                printf("Area = %.6f square_miles\n", result);
                break;

        }
    }

}

int main() {
    int from_unit, to_unit;
    long int value;

    printf("Enter the value for area:\n");
    scanf("%d", &value);

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
