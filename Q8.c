#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    printf("Input Seconds? ");
    scanf("%d", &seconds);

    hours = seconds / 3600;  // 1 hour = 3600 seconds
    seconds %= 3600;
    minutes = seconds / 60;  // 1 minute = 60 seconds
    seconds %= 60;

    printf("Hours   Minutes   Seconds\n");
    printf("%-7d %-9d %-7d\n", hours, minutes, seconds);

    return 0;
}