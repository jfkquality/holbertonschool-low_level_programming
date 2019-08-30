#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - print text to stderr
 * Description: print text to stderr
 * Return: 1
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" \
	- Dora Korpar, 2015-10-19\n"));

	return (1);
}
