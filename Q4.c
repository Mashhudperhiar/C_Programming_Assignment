#include <stdio.h>

int main() {
    int number, square, cube;

    printf("Please enter any one integer number: ");
    scanf("%d", &number);

    square = number * number;
    cube = number * number * number;

    printf("Square of %d is: %d\n", number, square);
    printf("Cube of %d is: %d\n", number, cube);

    return 0;
}