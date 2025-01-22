#include <stdio.h>
 int main() {
char fname [10], mname [10] ,Lname [10];
printf("Enter full name (first middle last):");
scanf("%s %s %s", fname, mname ,Lname);
printf("Abbreviated Name: " );
printf("%c %c %s\n", fname ,mname, Lname);
return 0;
}