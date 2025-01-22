// This is file Q52.c
#include <stdio.h>
#include <string.h>

void remove_last_occurrence(char *str, const char *word) {
    char *last_pos = NULL;
    char *current_pos = str;
    int len = strlen(word);

    
    while ((current_pos = strstr(current_pos, word)) != NULL) {
        last_pos = current_pos;
        current_pos++; 
    }

  
    if (last_pos != NULL) {
        memmove(last_pos, last_pos + len, strlen(last_pos + len) + 1);
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
    
    remove_last_occurrence(str, word);
    
    printf("Updated string: %s\n", str);
    
    return 0;
}
