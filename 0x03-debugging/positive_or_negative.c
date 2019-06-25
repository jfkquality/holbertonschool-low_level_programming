#include <stdio.h>
#include <string.h>

void positive_or_negative(int val)
{
	char result[20];

	if (val < 0)
	{
		strcpy (result, "negative");
	}	else
	{
		strcpy (result,  "positive");
	}

	printf("%d is %s\n",val,result);
}
