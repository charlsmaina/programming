#include <stdio.h>
#include <stdlib.h>



float add(float x, float y) {
    return x + y;
}


float subtract(float x, float y) {
    return x - y;
}

int main() {
    float num1, num2, result;
    char operation;

    printf("Simple Calculator\n");

    // Input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Select operation
    printf("Select operation (+ for addition, - for subtraction): ");
    scanf(" %c", &operation);

    // Perform the calculation based on the selected operation
    switch (operation) {
        case '+':
            result = add(num1, num2);
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        default:
            printf("Invalid operation\n");
            return 1;  // Exit with an error code
    }

    return 0;  // Exit successfully
}
