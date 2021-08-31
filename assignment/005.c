/* program to check whether a number is prime or not */

#include <stdio.h>
#include <conio.h>

void main()
{
  int i, n;
  clrscr();
  printf("\n Enter the number : ");
  scanf("%d", &n);
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      printf("\n The number is not PRIME");
      break;
    }
  }
  if (i > n / 2)
  {
    printf("\n The number is PRIME");
  }
  getch();
}
