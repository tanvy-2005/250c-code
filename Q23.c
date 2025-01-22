#include<stdio.h>
int main()
{
 int Size, i, a[10];
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\n Please Enter the Array Elements  :  ");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
 printf("\n List of Negative Numbers in this Array  :  "); 
 for(i = 0; i < Size; i ++)
 {
   if(a[i] < 0)
   {
	   	printf("%d  ", a[i]);
   }
 }
 return 0;
}