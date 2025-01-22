#include <stdio.h>
#include <string.h>
#include <ctype.h>


void trimSpaces(char *str) {
    int start = 0, end = strlen(str) - 1;

    
    while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n') {
        start++;
    }

   
    while (end >= start && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n')) {
        end--;
    }

    
    for (int i = 0; i <= end - start; i++) {
        str[i] = str[start + i];
    }
    
   
    str[end - start + 1] = '\0';
}

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    trimSpaces(str);
    
    printf("String after trimming leading and trailing spaces: \"%s\"\n", str);
    
    return 0;
}
