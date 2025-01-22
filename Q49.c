// This is file Q49.c
#include <stdio.h>
#include <string.h>

void find_all_occurrences(const char *str, const char *word) {
    const char *ptr = str;
    int position = 0;
    int found = 0;
    

    while ((ptr = strstr(ptr, word)) != NULL) {
        
        position = ptr - str;
        printf("Found '%s' at position: %d\n", word, position);
        ptr++;  
        found = 1;
    }
    
    if (!found) {
        printf("The word '%s' was not found in the string.\n", word);
    }
}

int main() {
    char str[100], word[50];
    
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 
    
    printf("Enter the word to find: ");
    fgets(word, sizeof(word), stdin); 
    
   
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    
    find_all_occurrences(str, word);
    
    return 0;
}