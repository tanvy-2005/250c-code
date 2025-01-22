#include <stdio.h>
#include <string.h>

int find_last_word(const char *str, const char *word) {
    const char *last_pos = NULL;
    
  
    while ((last_pos = strstr(last_pos, word)) != NULL) {
        last_pos++;  
    }
    
    if (last_pos == NULL) {
        return -1;
    }
    
    
    return last_pos - str - strlen(word);
}

int main() {
    char str[100], word[50];
    
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 
    
    printf("Enter the word to find: ");
    fgets(word, sizeof(word), stdin); 
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    
    int position = find_last_word(str, word);
    
    if (position != -1) {
        printf("The last occurrence of the word '%s' is at position: %d\n", word, position);
    } else {
        printf("The word '%s' was not found in the string.\n", word);
    }
    
    return 0;
}
