#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Please enter a five-digit number: ");
    scanf("%d", &number);

    printf("Separated from one another by three spaces: ");

    // Extracting and printing individual digits
    digit = number / 10000;  // Extract first digit
    printf("%d   ", digit);
    sum += digit;

    digit = (number / 1000) % 10;  // Extract second digit
    printf("%d   ", digit);
    sum += digit;

    digit = (number / 100) % 10;  // Extract third digit
    printf("%d   ", digit);
    sum += digit;

    digit = (number / 10) % 10;  // Extract fourth digit
    printf("%d   ", digit);
    sum += digit;

    digit = number % 10;  // Extract fifth digit
    printf("%d\n", digit);
    sum += digit;

    printf("Sum of five digits: %d\n", sum);

    return 0;
}