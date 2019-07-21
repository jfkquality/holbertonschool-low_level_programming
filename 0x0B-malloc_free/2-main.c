#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char *s;

  /* str_concat("Hello", NULL); str_concat(NULL, "Hello"); str_concat(NULL, NULL); */

  s = str_concat(NULL, NULL);
  if (s == NULL)
    {
      printf("failed\n");
      return (1);
    }
  printf("%s\n", s);
  free(s);
  return (0);
}
