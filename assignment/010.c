/* program to find all prime numbers between certain ranges given by the user */

#include <stdio.h>
#include <conio.h>

void main()
{
  int x, y, i, j, c, flag = 0;
  clrscr();
  printf("\n Enter the certain range (e.g: 50-100) : ");
  scanf("%d%d", &x, &y);
  for (i = x; i <= y; i++)
  {
    for (j = 2; j <= i / 2; j++)
    {
      c = i % j;
      if (c == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      printf(" %d,", i);
  }
  getch();
}