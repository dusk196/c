/* program to calculate and print the sum of digits & whether the number is perfect or not */

#include <stdio.h>
#include <conio.h>

void main()
{
  int n, i, t = 1, s = 0, sum = 0, x;
  clrscr();
  printf("\n Enter the number : ");
  scanf("%d", &n);
  for (i = 1; i <= n - 1; i++)
  {
    if (n % i == 0)
    {
      s = s + i;
      t = t * 1;
    }
  }
  if (s == t)
    printf("\n The number is perfect");
  else
    printf("\n The number is not perfect");
  while (n != 0)
  {
    x = n % 10;
    sum = sum + x;
    n = n / 10;
  }
  printf("\n the sum of digits : %d", sum);
  getch();
}