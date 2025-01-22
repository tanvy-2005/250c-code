#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter Three Numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    { 
        if(a>c)
        printf("%d is largest",a);
    }
    if(b>a)
    {
        if(b>c)
        printf("%d is largest",b);
    }
    if (c>a)
    { 
        if(c>b)
        printf("%d is largest",c);
    }
    return 0;
}