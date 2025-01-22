#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0}; 
    int i, minFreq = 1000; 
    char minChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { // Ignore spaces
            freq[(int)str[i]]++;
        }
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && freq[i] < minFreq) {
            minFreq = freq[i];
            minChar = (char)i;
        }
    }
    if (minFreq == 1000) {
        printf("No characters found in the string.\n");
    } else {
        printf("The character with the lowest frequency is '%c', appearing %d times.\n", minChar, minFreq);
    }

    return 0;
}