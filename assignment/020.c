/* program to convert a number from any base(r) to any base(P) */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int n1, n2, i = 0, r, b1, b2, a[5], j, sum;
    printf("\n Enter the number : ");
    scanf("%d", &n1);
    while (n1 > 0)
    {
        r = n1 % 10;
        a[i] = r;
        n1 = n1 / 10;
        i++;
    }
    {
        printf("\n Incorrect digit.");
        getch();
        exit(0);
    }
    for (j = 0; j < i; j++)
    {
        n2 = n2 + (a[j] * pow(b1, j));
    }
    i = 0;
    while (n2 > 2)
    {
        r = n2 % b2;
        a[i] = r;
        i++;
        n2 = n2 / b2;
    }
    printf("\n The equivalent number is : ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    getch();
}