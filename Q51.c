// This is file Q51.c
#include <stdio.h>
#include <string.h>

void remove_first_occurrence(char *str, const char *word) {
    char *pos = strstr(str, word);  
    
    if (pos != NULL) {
        int len = strlen(word); 
        
        
        memmove(pos, pos + len, strlen(pos + len) + 1);
    }
}

int main() {
    char str[100], word[50];
    
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  
    
    printf("Enter the word to remove: ");
    fgets(word, sizeof(word), stdin);  
    
   
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    
    remove_first_occurrence(str, word);
    
    printf("Updated string: %s\n", str);
    
    return 0;
}
