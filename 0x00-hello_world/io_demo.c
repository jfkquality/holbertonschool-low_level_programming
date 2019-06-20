#include <stdio.h>

int main(void)
{
  char f, m, l;
  int age;

  printf("Enter your initials: ");
  scanf("%c %c %c", &f, &m, &l);
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("My initials are: %c%c%c and my age is %d.\n", f, m, l, age);


  return(0);
}
