#include <stdio.h>
#include <stdlib.h>


//name:Charles Maina Kinyua
//Reg no :ENE212-0087/2021

//A program to determine armstrong numbers

    int isArmstrong(int num) {
    int originalNum = num, sum = 0, digitCount = 0;

    // Count the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        digitCount++;
    }

    // Reset originalNum to the original value
    originalNum = num;

    // Calculate the sum of digits raised to the power of digitCount
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digitCount);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == num);
}

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
