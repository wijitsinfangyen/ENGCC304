#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int i, len, isPalindrome = 1;

    printf("Enter word:\n");
    scanf("%s", word);

    len = strlen(word);

    for (i = 0; i < len; i++) {
        word[i] = tolower(word[i]);
    }

    for (i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
