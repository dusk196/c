/* program to print the following pattern :

    1
   21
  321
 4321
54321

*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, m, k, n;
    clrscr();
    printf("\n Input the term : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = n - i;
        for (j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (m = i; m > 0; m--)
        {
            printf("%d", m);
        }
        printf("\n");
    }
    getch();
}