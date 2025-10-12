#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

// ฟังก์ชันตัดเกรด
const char* getGrade(float score) {
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
    S students[3];
    printf("Enter the details of 3 students:\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: \n");
        fgets(students[i].Name, sizeof(students[i].Name), stdin);
        printf("ID: \n");
        fgets(students[i].ID, sizeof(students[i].ID), stdin);
        printf("Scores in Subject 1: \n");
        scanf("%f", &students[i].ScoreSub1);
        printf("Scores in Subject 2: \n");
        scanf("%f", &students[i].ScoreSub2);
        printf("Scores in Subject 3: \n");
        scanf("%f", &students[i].ScoreSub3);
        printf("Scores in Subject 4: \n");
        scanf("%f", &students[i].ScoreSub4);
        printf("Scores in Subject 5: \n");
        scanf("%f", &students[i].ScoreSub5);
        getchar(); // เคลียร์ newline หลัง scanf
    }

    for (int i = 0; i < 3; i++) {
        float scores[5] = {
            students[i].ScoreSub1,
            students[i].ScoreSub2,
            students[i].ScoreSub3,
            students[i].ScoreSub4,
            students[i].ScoreSub5
        };

        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s", students[i].Name);
        printf("ID: %s", students[i].ID);
        printf("Scores: ");
        for (int j = 0; j < 5; j++) {
            printf("%.0f ", scores[j]);
        }

        printf("\nGrades: ");
        for (int j = 0; j < 5; j++) {
            printf("%s ", getGrade(scores[j]));
        }

        float avg = (scores[0] + scores[1] + scores[2] + scores[3] + scores[4]) / 5.0;
        printf("\nAverage Scores: %.1f\n", avg);
    }

    return 0;
}