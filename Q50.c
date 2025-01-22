// This is file Q50.c
#include <stdio.h>
#include <string.h>

int count_occurrences(const char *str, const char *word) {
    int count = 0;
    const char *ptr = str;
    
   
    while ((ptr = strstr(ptr, word)) != NULL) {
        count++;  
        ptr++;  
    }
    
    return count;
}

int main() {
    char str[100], word[50];
    
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 
    
    printf("Enter the word to count: ");
    fgets(word, sizeof(word), stdin);  
    
   
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    
    int occurrences = count_occurrences(str, word);
    
    printf("The word '%s' appears %d times in the string.\n", word, occurrences);
    
    return 0;
}
