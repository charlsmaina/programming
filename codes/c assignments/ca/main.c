#include <stdio.h>


double convertSquareMeters(double value, int toUnit);
double convertSquareFeet(double value, int toUnit);
double convertSquareKilometers(double value, int toUnit);
double convertAcres(double value, int toUnit);

int main() {
    double value;
    int fromUnit, toUnit;

    printf("Enter the value of area: ");
    scanf("%lf", &value);

    printf("Select the unit of area:\n");
    printf("1. Square Meters\n");
    printf("2. Square Feet\n");
    printf("3. Square Kilometers\n");
    printf("4. Acres\n");
    printf("Enter your choice: ");
    scanf("%d", &fromUnit);

    printf("Select the unit to convert to:\n");
    printf("1. Square Meters\n");
    printf("2. Square Feet\n");
    printf("3. Square Kilometers\n");
    printf("4. Acres\n");
    printf("Enter your choice: ");
    scanf("%d", &toUnit);

    // Conversion based on the selected units
    double result;
    switch (fromUnit) {
        case 1:
            result = convertSquareMeters(value, toUnit);
            break;
        case 2:
            result = convertSquareFeet(value, toUnit);
            break;
        case 3:
            result = convertSquareKilometers(value, toUnit);
            break;
        case 4:
            result = convertAcres(value, toUnit);
            break;
        default:
            printf("Invalid input!\n");
            return 1;
    }

    // Displaying the result
    printf("Converted value: %.2lf\n", result);

    return 0;
}

// Function to convert square meters to other units
double convertSquareMeters(double value, int toUnit) {
    switch (toUnit) {
        case 1: return value; // Square Meters to Square Meters
        case 2: return value * 10.7639; // Square Meters to Square Feet
        case 3: return value * 0.000001; // Square Meters to Square Kilometers
        case 4: return value * 0.000247105; // Square Meters to Acres
        default:
            printf("Invalid input!\n");
            return -1;
    }
}

// Function to convert square feet to other units
double convertSquareFeet(double value, int toUnit) {
    switch (toUnit) {
        case 1: return value * 0.092903; // Square Feet to Square Meters
        case 2: return value; // Square Feet to Square Feet
        case 3: return value * 9.2903e-8; // Square Feet to Square Kilometers
        case 4: return value * 2.2957e-5; // Square Feet to Acres
        default:
            printf("Invalid input!\n");
            return -1;
    }
}

// Function to convert square kilometers to other units
double convertSquareKilometers(double value, int toUnit) {
    switch (toUnit) {
        case 1: return value * 1000000; // Square Kilometers to Square Meters
        case 2: return value * 10763910.4; // Square Kilometers to Square Feet
        case 3: return value; // Square Kilometers to Square Kilometers
        case 4: return value * 247.105; // Square Kilometers to Acres
        default:
            printf("Invalid input!\n");
            return -1;
    }
}

// Function to convert acres to other units
double convertAcres(double value, int toUnit) {
    switch (toUnit) {
        case 1: return value * 4046.86; // Acres to Square Meters
        case 2: return value * 43560; // Acres to Square Feet
        case 3: return value * 0.00404686; // Acres to Square Kilometers
        case 4: return value; // Acres to Acres
        default:
            printf("Invalid input!\n");
            return -1;
    }
}
