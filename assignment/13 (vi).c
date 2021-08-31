/* program to print the following pattern :

    1
   111
  11111
 1111111
111111111

*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, c = 1, k, j, m, i;
    clrscr();
    printf("\n Input the term : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = n - i;
        for (j = 1; j <= k; j++)
        {
            printf("   ");
        }
        for (m = 1; m <= c; m++)
        {
            printf(" 1 ");
        }
        printf("\n");
        c = c + 2;
    }
    getch();
}