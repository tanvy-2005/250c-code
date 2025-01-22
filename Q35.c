#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the character to remove: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0';
    printf("Updated string: %s\n", str);

    return 0;
}