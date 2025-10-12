#include <stdio.h>

int main() {
    float s;
    printf("enter score :\n");
    if (scanf("%f", &s) != 1) {
        printf("please enter number only.\n");
        return 0;
    }

    if (s < 50) printf("F !\n");
    else if (s < 55) printf("D !\n");
    else if (s < 60) printf("D+ !\n");
    else if (s < 65) printf("C !\n");
    else if (s < 70) printf("C+ !\n");
    else if (s < 75) printf("B !\n");
    else if (s < 80) printf("B+ !\n");
    else printf("A !\n");
}
