#include <stdio.h>
#include <string.h>

void replace_characters(char* str, char old_char, char new_char) {
    int i = 0;
    while (str[i] != '\0') {
        
        if (str[i] == '/' && str[i+1] == '/') {
            break;
        }
        if (str[i] == old_char) {
            str[i] = new_char;
        }
        i++;
    }
}

int main() {
    char str[100];
    char old_char, new_char;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    
    printf("Enter the character to replace: ");
    scanf("%c", &old_char);
    
    getchar();  
    
    printf("Enter the replacement character: ");
    scanf("%c", &new_char);
    
    replace_characters(str, old_char, new_char);
    
    printf("Updated string: %s\n", str);

    return 0;
}