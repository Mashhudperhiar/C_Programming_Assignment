#include <stdio.h>

int main() {
    int amount;
    
    printf("Enter any amount: ");
    scanf("%d", &amount);
    
    int denominations[] = {500, 100, 50, 20, 10, 5, 2, 1};
    int coins[8] = {0};  // Array to store the count of each coin
    
    for (int i = 0; i < 8; i++) {
        coins[i] = amount / denominations[i];
        amount = amount % denominations[i];
    }
    
    printf("Denominations: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", denominations[i]);
    }
    
    printf("\nCount:        ");
    for (int i = 0; i < 8; i++) {
        printf("%2d ", coins[i]);
    }
    
    return 0;
}