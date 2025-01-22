#include<stdio.h>
void main() 
{
    int a, b, max;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b; 
    while (max % a != 0 || max % b != 0) 
    {
            max++;
    }
    printf("The LCM of %d and %d is %d.", a, b, max);
}