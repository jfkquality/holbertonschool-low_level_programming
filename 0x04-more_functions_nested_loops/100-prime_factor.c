include <stdio.h>


int main(void)
{
	n = 1231952;
	for (x = 2; x < n; x++)
	{
	  for (y = 4; y < x / 2; y++)
	    {
	      if (x % y == 0)
		continue;
	    }
	}
}
