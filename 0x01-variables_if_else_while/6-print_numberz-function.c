#include <stdio.h>

/**
 * main. Print numbers 1-10
 * Description. Print numbers 1-10.
 * Result 0
 */

void print(long n)
{
  if (n < 0) 
    {
      putchar('-');
      n = -n;
    }

  if (n/10)
    {
      print(n/10);
    }
  putchar(n%10 + '0');
}

int main(void)
{
  int n;
   

  n = 0;
  while (n < 10)
    {
      putchar(n%10 + '0');
      n++;
    }
    putchar('\n');

  /*  long int n = 12045;
  print(n);
  putchar('\n');
  */

  return (0);
}
