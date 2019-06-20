#include <stdio.h>

int main(void)
{
  int i;
  double d;
  char c;

  printf("This size of an int is %lu.\n", (unsigned long)sizeof(i));
  printf("This size of a double is %lu.\n", (unsigned long)sizeof(d));
  printf("This size of a character is %lu.\n", (unsigned long)sizeof(c));

  return(0);
}
