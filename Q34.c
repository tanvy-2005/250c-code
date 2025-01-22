#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, lastIndex = -1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            lastIndex = i;
        }
    }
    if (lastIndex != -1) {
        for (i = lastIndex; str[i] != '\0'; i++) {
            str[i] = str[i + 1];
        }
        printf("Updated string: %s\n", str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}