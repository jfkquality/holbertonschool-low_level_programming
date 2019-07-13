#include <stdio.h>

/**
 * main - print alphabet except letters e q
 * Description. Print alphabet in lower case.
 * exclude letters e,q
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' &&  c != 'q') /*	continue; */
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
