#include <stdio.h>
#include <string.h>

void replaceLastOccurrence(char *str, char oldChar, char newChar) {
    int i;
    int lastIndex = -1;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            lastIndex = i;
        }
    }
    if (lastIndex != -1) {
        str[lastIndex] = newChar;
    }
}

int main() {
    char str[1000];
    char oldChar, newChar;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to replace: ");
    scanf("%c", &oldChar);
    getchar();

    printf("Enter the new character: ");
    scanf("%c", &newChar);

    replaceLastOccurrence(str, oldChar, newChar);

    printf("String after replacement: \"%s\"\n", str);
    
    return 0;
}