#include <stdio.h>

int main() {
    int n;
    char *word[] = {
        "zero","one","two","three","four","five","six",
        "seven","eight","nine","ten","eleven","twelve",
        "thirteen","fourteen","fifteen","sixteen",
        "seventeen","eighteen","nineteen"
    };

    printf("User Input :");
    scanf("%d", &n);

    if (n >= 0 && n < 20)
        printf("Result : %s\n", word[n]);
    else
        printf("Out of range\n");
}
