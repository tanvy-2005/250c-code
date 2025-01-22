#include <stdio.h>
#include <string.h>

int find_word(const char *str, const char *word) {

    char *ptr = strstr(str, word);

    if (ptr != NULL) {
        return ptr - str;  
    }
    return -1;  
}

int main() {
    char str[100], word[50];
    
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  
    
    printf("Enter the word to find: ");
    fgets(word, sizeof(word), stdin);  
    
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    
    int position = find_word(str, word);
    
    if (position != -1) {
        printf("The word '%s' is found at position: %d\n", word, position);
    } else {
        printf("The word '%s' was not found in the string.\n", word);
    }
    
    return 0;
}
