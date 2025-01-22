#include <stdio.h>
#include <string.h>
#include <ctype.h>


void trimTrailingSpaces(char *str) {
    int length = strlen(str);
    
    
    while (length > 0 && (str[length - 1] == ' ' || str[length - 1] == '\t' || str[length - 1] == '\n')) {
        length--;
    }
    
    
    str[length] = '\0';
}

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    trimTrailingSpaces(str);
    
    printf("String after trimming trailing spaces: \"%s\"\n", str);
    
    return 0;
}