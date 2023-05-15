#include <stdio.h>

int main() {
    char name[50];
    char seatNo[20];
    int marksEnglish, marksElectronics, marksMaths, marksProgramming;
    int totalMarks;
    float percentage;

    printf("Enter name of Student: ");
    scanf("%s", name);

    printf("Enter Seat No: ");
    scanf("%s", seatNo);

    printf("Enter marks of English: ");
    scanf("%d", &marksEnglish);

    printf("Enter marks of Basic Electronics: ");
    scanf("%d", &marksElectronics);

    printf("Enter marks of Mathematics: ");
    scanf("%d", &marksMaths);

    printf("Enter marks of Computer Programming: ");
    scanf("%d", &marksProgramming);

    totalMarks = marksEnglish + marksElectronics + marksMaths + marksProgramming;
    percentage = (float)totalMarks / 4.0;

    printf("\nM A R K S H E E T\n");
    printf("Name: %s Seat No: %s\n", name, seatNo);
    printf("------------------------------------------------------------\n");
    printf("Subjects\tMarks\n");
    printf("------------------------------------------------------------\n");
    printf("1. English\t%d\n", marksEnglish);
    printf("2. Basic Electronics\t%d\n", marksElectronics);
    printf("3. Mathematics\t%d\n", marksMaths);
    printf("4. Computer Programming\t%d\n", marksProgramming);
    printf("------------------------------------------------------------\n");
    printf("Total\t\t%d\n", totalMarks);
    printf("Percentage%%\t%.2f\n", percentage);

    return 0;
}