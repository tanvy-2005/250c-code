#include <stdio.h>
#include <string.h>

void removeRepeatedChars(char *str) {
    int index = 0, i, j;
    int len = strlen(str);
    
    for (i = 0; i < len; i++) {
        
        int found = 0;
        for (j = 0; j < index; j++) {
            if (str[i] == str[j]) {
                found = 1;
                break;
            }
        }
        
        
        if (!found) {
            str[index++] = str[i];
        }
    }
    
  
    str[index] = '\0';
}

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    
    removeRepeatedChars(str);
    
    printf("String after removing repeated characters: \"%s\"\n", str);
    
    return 0;
}
