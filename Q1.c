#include <stdio.h>
int main() {
int radius,r;
float PI = 3.14, area, circumference;
printf("Enter the radius of circle: ");
scanf("%d", &radius);
area = PI * radius * radius;
printf("The Area of circle is: %f", area);
circumference = 2 * PI * radius;
printf("\nThe Circumference of circle is: %f", circumference);
scanf("%d", &r);
return 0;
}