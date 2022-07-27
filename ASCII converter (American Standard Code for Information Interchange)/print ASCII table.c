#include <stdio.h>
int main()
{
  int i;
  char x;

  printf(" **** CODICE ASCII ESTESO (8 bit) ***");

  for (int i = 0; i < 255; i++)
  {
    printf("numero: %d", i);

    x = i;

    printf(" carratere: %c\n", x);
  }
}