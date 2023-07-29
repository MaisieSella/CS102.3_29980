#include <stdio.h>
#define PI 3.14159
int main()
{
 float r, d, circumference, area;
 printf("Enter radius of circle: ");
 scanf("%f", &r);

 d = 2 * r;
 circumference = 2 * PI * r;
 area = PI * r * r;

 printf("Diameter: %f\n", d);
 printf("Circumference: %f\n", circumference);
 printf("Area: %f\n", area);
 return 0;
7
}
