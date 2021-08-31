/* program to find the area of a triangle */

#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, c, s, area;
    clrscr();
    printf("Input 3 sides of the triangle : ");
    scanf("%f%f%f", a, b, c);
    s = (a + b + c) / 2;
    area = (s * (s - a) * (s - b) * (s - c)) ^ (1 / 2);
    printf("Area = %f", area);
    getch();
}