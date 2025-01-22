#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of int: %u bytes\n", sizeof(intType));
    printf("Size of float: %u bytes\n", sizeof(floatType));
    printf("Size of double: %u bytes\n", sizeof(doubleType));
    printf("Size of char: %u byte\n", sizeof(charType));
    return 0;
}