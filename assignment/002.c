/* program to convert a given Celsius temperature to Farenheit temperature */

#include <stdio.h>
#include <conio.h>

void main()
{
    int f, c;
    clrscr();
    printf("\n Enter the Celsius temperature : ");
    scanf("%d", &c);
    f = ((9 * c) / 5) + 32;
    printf("\n The equivalent Farenheit temperature is : %d", f);
    getch();
}