#include <stdio.h>
#include <string.h>

void findFirstOccurrenceChar(char *str, char ch) {
    char *ptr = strchr(str, ch); // Locate the first occurrence of 'ch' in 'str'
    if (ptr)
        printf("First occurrence of '%c' is at index %ld\n", ch, ptr - str);
    else
        printf("Character '%c' not found.\n", ch);
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    printf("Enter the character to find: ");
    scanf(" %c", &ch); // Read the character to search
    findFirstOccurrenceChar(str, ch);
    return 0;
}