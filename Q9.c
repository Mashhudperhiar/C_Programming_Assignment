#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    printf("Input Days? ");
    scanf("%d", &days);

    years = days / 365;          // 1 year = 365 days
    weeks = (days % 365) / 7;    // 1 week = 7 days
    remainingDays = days % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}