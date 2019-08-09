#include <stdio.h>

void main()
{
  unsigned long int mask;
  printf("Memory required: %lu bytes. \n", sizeof(mask));
  mask = 256;
  printf("Max # for ul, 8 bytes (64 bits), FF^4 = 256^4 = %lu\n", mask * mask * mask * mask);
}
