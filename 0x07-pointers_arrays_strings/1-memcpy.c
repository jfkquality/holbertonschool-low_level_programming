/**
 * _memcpy - copy buffer in hexa
 * @dest: the address of memory to print to
 * @src: the addres of the memory to print
 * @n: # of chars from src to print
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
