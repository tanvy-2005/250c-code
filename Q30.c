#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0}; 
    int i, maxFreq = 0;
    char maxChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    printf("The character with the highest frequency is '%c', appearing %d times.\n", maxChar, maxFreq);

    return 0;
}