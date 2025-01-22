#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the character to search: ");
    scanf("%c", &ch);
    printf("Occurrences of '%c': ", ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
            printf("%d ", i);  // Print the index of the occurrence
        }
    }

    if (count == 0) {
        printf("None");
    }

    printf("\nTotal occurrences: %d\n", count);
    return 0;
}