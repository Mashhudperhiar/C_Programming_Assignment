#include <stdio.h>

int main() {
    int firstNumber, lastNumber;
    int sum, product, difference, division, remainder, total;

    printf("Enter 1st number: ");
    scanf("%d", &firstNumber);

    printf("Enter last number: ");
    scanf("%d", &lastNumber);

    sum = firstNumber + lastNumber;
    product = firstNumber * lastNumber;
    difference = firstNumber - lastNumber;
    division = firstNumber / lastNumber;
    remainder = firstNumber % lastNumber;
    total = sum + product + difference + division + remainder;

    printf("Sum of %-2d and %-2d is : %02d\n", firstNumber, lastNumber, sum);
    printf("Product of %-2d and %-2d is : %02d\n", firstNumber, lastNumber, product);
    printf("Difference between %-2d and %-2d is : %02d\n", firstNumber, lastNumber, difference);
    printf("Division of %-2d and %-2d is : %02d\n", firstNumber, lastNumber, division);
    printf("Remainder of %-2d and %-2d is : %02d\n", firstNumber, lastNumber, remainder);
    printf("-----------------------------------------\n");
    printf("Total is : %-33d\n", total);

    return 0;
}