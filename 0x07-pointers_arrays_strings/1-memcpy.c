/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: char to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d1 = dest;
	char *s1 = src;
	unsigned int n1 = n;

	while (n1)
	{
		*d1 = *s1;
		d1++;
		s1++;
		n1--;
	}
	return (dest);
}
