#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter any number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;           // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;   // Append the digit to reversedNumber
        number /= 10;                      // Remove the last digit from number
    }

    printf("Reverse of %d is: %d\n", number, reversedNumber);

    return 0;
}