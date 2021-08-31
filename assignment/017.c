/* program to find the binary equivalent of an integer number */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, m = 1, s = 0, i = 0;
    clrscr();
    printf("Enter a decimal number : ");
    scanf("%d", &n);
    while (m != 0)
    {
        m = n % 2;
        n = n / 2;
        s = s + m * pow(10, i);
        i = i + 1;
    }
    printf("%d", &s);
    getch();
}