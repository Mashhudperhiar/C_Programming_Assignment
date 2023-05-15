#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;     // Get the last digit
        sum += digit;            // Add the digit to sum
        number /= 10;            // Remove the last digit from number
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}