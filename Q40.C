#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removeExtraSpaces(char *str) {
    int i = 0, j = 0;
    int inWord = 0;
    while (str[i]) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
            inWord = 1;
        } else {
            if (inWord) {
                str[j++] = ' ';
                inWord = 0;
            }
        }
        i++;
    }
    str[j] = '\0';
    if (j > 0 && str[j - 1] == ' ') {
        str[j - 1] = '\0';
    }
}

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    removeExtraSpaces(str);
    
    printf("String after removing extra spaces: \"%s\"\n", str);
    
    return 0;
}