#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

// ฟังก์ชันสำหรับตัดเกรด
char *grade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

int main() {
    S std[3];
    int i;

    printf("Enter the details of 3 students :\n");

    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);

        printf("Name:\n");
        fgets(std[i].Name, sizeof(std[i].Name), stdin);
        std[i].Name[strcspn(std[i].Name, "\n")] = '\0';

        printf("ID:\n");
        fgets(std[i].ID, sizeof(std[i].ID), stdin);
        std[i].ID[strcspn(std[i].ID, "\n")] = '\0';

        printf("Scores in Subject 1:\n");
        scanf("%f", &std[i].ScoreSub1);
        printf("Scores in Subject 2:\n");
        scanf("%f", &std[i].ScoreSub2);
        printf("Scores in Subject 3:\n");
        scanf("%f", &std[i].ScoreSub3);
        printf("Scores in Subject 4:\n");
        scanf("%f", &std[i].ScoreSub4);
        printf("Scores in Subject 5:\n");
        scanf("%f", &std[i].ScoreSub5);
        getchar(); // ล้าง buffer
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        float avg = (std[i].ScoreSub1 + std[i].ScoreSub2 + std[i].ScoreSub3 + std[i].ScoreSub4 + std[i].ScoreSub5) / 5.0;

        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", std[i].Name);
        printf("ID: %s\n", std[i].ID);

        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
               std[i].ScoreSub1, std[i].ScoreSub2, std[i].ScoreSub3, std[i].ScoreSub4, std[i].ScoreSub5);

        printf("Grades: %s %s %s %s %s\n",
               grade(std[i].ScoreSub1), grade(std[i].ScoreSub2), grade(std[i].ScoreSub3),
               grade(std[i].ScoreSub4), grade(std[i].ScoreSub5));

        printf("Average Scores: %.1f\n\n", avg);
    }

    return 0;
}
