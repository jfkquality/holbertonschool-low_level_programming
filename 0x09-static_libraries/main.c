#include <stdio.h>

int _isdigit(int c);


int main(void)
{
  if (_isalpha(9))
    printf("Success");
  else
    printf("Failed");
  return (0);
}
