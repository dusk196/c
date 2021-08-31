/* program to calculate the factors of a number */

#include <stdio.h>
#include <conio.h>

void main()
{
  int n, i;
  clrscr();
  printf("\n Enter the number : ");
  scanf("%d", &n);
  printf("\n Factors : ");
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
      printf(" %d,", i);
  }
  getch();
}