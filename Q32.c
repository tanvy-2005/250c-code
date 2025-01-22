#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0}; 
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) { 
            printf("'%c': %d\n", (char)i, freq[i]);
        }
    }

 return 0;
}