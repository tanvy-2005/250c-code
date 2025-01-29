#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char str[]) {
    int i, j = 0;
    char result[100]; 
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) { // If not a vowel, add to the result
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 
    strcpy(str, result);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin;
    str[strcspn(str, "\n")] = '\0'; 
    removeVowels(str);
    printf("String after removing vowels: %s\n", str);

    return 0;
}