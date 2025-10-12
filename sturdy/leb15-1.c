#include <stdio.h>

int main() {
    char filename[100];
    char word[100];
    int count = 0;
    FILE *fp;
        printf("Enter file name: ");
        scanf("%s", filename);
    fp = fopen(filename, "r");
            if (fp == NULL) {
            printf("Cannot open file %s\n", filename);
            return 1;
                            }   
            while (fscanf(fp, "%99s", word) == 1) {
            count++;
                            }
        printf("Total number of words in '%s' : %d words\n", filename, count);
            fclose(fp);
            return 0;
}
