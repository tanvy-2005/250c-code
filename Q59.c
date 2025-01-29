#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, circumference, volume, surface_area;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    circumference = 2 * PI * radius;
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);
    printf("Radius of the cylinder: %.2f\n", radius);
    printf("Circumference of the base: %.2f\n", circumference);
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);
    return 0;
}