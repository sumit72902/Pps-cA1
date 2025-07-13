#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 5;
  int center = n / 2;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (abs(i - center) + abs(j - center) == center && (i + j) % 2 == 0)
      {
        printf("* ");
      }
      else if (i == center && j == center)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}