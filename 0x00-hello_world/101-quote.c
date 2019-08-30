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
	char *a1 = "and that piece of art is useful\"";
	int len1 = strlen("and that piece of art is useful\"");
	char *a2 = " - Dora Korpar, 2015-10-19\n";
	int len2 = strlen("- Dora Korpar, 2015-10-19");

	write(STDERR_FILENO, a1, len1);
	write(STDERR_FILENO, a2, len2);
	write(STDERR_FILENO, "\n", 1);

	/* printf("%li\n", strlen("and that piece of art is useful\" - Dora */
/* Korpar, 2015-10-19")); */
	return (1);
}
