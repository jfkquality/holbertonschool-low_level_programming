#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - copy one file to another
 * @argc: count of arg
 * @argv: list of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buf[1024], *file1, *file2;
	ssize_t count, wrote; /* , bufsize = 1024; */
	int fd1, fd2; /* closed */

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = argv[1];
	file2 = argv[2];
	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1), exit(98);
	fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2), exit(99);
	/* count = bufsize; */
	while ((count = read(fd1, buf, sizeof(buf))))
	{
		/* count = read(fd1, buf, sizeof(buf)); */ /* change from bufsize */
		if (count == -1)
		{
			close(fd1);
			close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1), exit(98);
		}
		wrote = write(fd2, buf, count);
		if (wrote == -1 || wrote != count) /* Include || wrote != count? */
		{
			close(fd1);
			close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2), exit(99);
		}
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
