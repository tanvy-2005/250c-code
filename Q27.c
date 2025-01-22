#include <stdio.h>
#include <string.h>

void findLastOccurrenceChar(char *str, char ch) {
    char *ptr = strrchr(str, ch); // Locate the last occurrence of 'ch' in 'str'
    if (ptr)
        printf("Last occurrence of '%c' is at index %ld\n", ch, ptr - str);
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
    findLastOccurrenceChar(str, ch);
    return 0;
}