#include <stdio.h>
#include <string.h>

void replaceFirstOccurrence(char *str, char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
            break;
        }
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

    replaceFirstOccurrence(str, oldChar, newChar);

    printf("String after replacement: \"%s\"\n", str);
    
    return 0;
}