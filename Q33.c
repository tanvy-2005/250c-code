#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, j, found = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch && !found) {
            found = 1;
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1]; 
            }
            break;
        }
    }

    if (found) {
        printf("Updated string: %s\n", str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}