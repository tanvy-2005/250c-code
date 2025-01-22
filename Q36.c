#include <stdio.h>
#include <string.h>

void removeWord(char *str, const char *word) {
    char *pos, temp[1000];
    int index = 0;
    int wordLen = strlen(word);

    while (*str) {
        pos = strstr(str, word);
        if (pos) {
            
            while (str < pos) {
                temp[index++] = *str++;
            }
            
            str += wordLen;
        } else {
            
            while (*str) {
                temp[index++] = *str++;
            }
            break;
        }
    }

    temp[index] = '\0';  
    strcpy(str - index, temp);  
}

int main() {
    char str[1000];
    char word[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    return 0;
}