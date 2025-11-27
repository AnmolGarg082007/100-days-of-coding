/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[100], ch;
    scanf("%s", str);
    scanf(" %c", &ch);   // space before %c to ignore newline

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d", count);

    return 0;
}

