/* program to print the following pattern :

   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include <stdio.h>
#include <conio.h>

void main()
{
   int n, c = 1, k, j, m, i, x, y, z, l = 1;
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
   c = c - 2;
   for (x = 0; x <= n - 1; x++)
   {
      for (y = 1; y <= l; y++)
      {
         printf("   ");
      }
      for (z = 1; z <= c - 2; z++)
      {
         printf(" 1 ");
      }
      printf("\n");
      c = c - 2;
      l = l + 1;
   }
   getch();
}
