#include <stdio.h>


/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
  *cc = 'o';
  ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
  char c;
  char *p;

  p = &c;
  c = 'H';

  printf("Value of 'c' before the call (s/b H): %d '%c'\n", c, c);
  printf("Address of 'c' (&c): %p\n", &c);
  printf("Value of 'p' (s/b same as c): %p\n", p);
  printf("Address of 'p'(different than c): %p\n", &p);
  modif_my_char_var(p, c);
  printf("Value of 'c' after the call (s/b o): %d ('%c')\n", c, c);


  return (0);
}
