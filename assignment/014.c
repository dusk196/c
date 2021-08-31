/* program to generate the fibbonacci series upto a certain range */

#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 0, y = 1, z = 0, i, n, s = 1, temp;
    clrscr();
    printf("\n Enter the range : ");
    scanf("%d", &n);
    printf("%d %d ", x, y);
    for (i = 0; i <= n - 3; i++)
    {
        z = x + y;
        s = s + z;
        printf("%d ", z);
        temp = y;
        x = temp;
        y = z;
    }
    printf("\n sum = %d", s);
    getch();
}