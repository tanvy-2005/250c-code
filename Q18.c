#include <stdio.h>

int main() 
{int a;
 printf("Enter age\n");
 scanf("%d",&a);
 if (a>=18)
 {printf("You are eligible to vote\n");}
 else{printf("You are not eligible to vote\n");}
 return 0;
}