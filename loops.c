#include <stdio.h>
int main(void)
{

  printf("Hello\n");
  int x, y, a = 65;
  for (x = 0; x <= 9; x++)
  {
    for (y = 0; y <= 9 - x; y++)
    {
      if (a >= 91)
      {
        break;
      }
      printf(" %c ", a);
      a++;
    }
    printf("\n");
  }

  return 0;
}