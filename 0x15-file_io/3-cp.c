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
	int fd1, fd2;
	char *buf[1024], *file1, *file2;
	int count, wrote, bufsize = 1024;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file1 = argv[1];
	file2 = argv[2];
	fd1 = open(file1, O_RDONLY, 0664);
	/* while ((fd1 = open(file1, O_CREAT | O_RDONLY, 0662) == -1) */
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Can't read from %s\n", file1), exit(98);

	/* fd2 = open(file2, O_CREAT | O_EXCL) */
	/* if (fd2 < 0) */
	fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/* while ((fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0662) == -1) */
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Can't write to %s\n", file2), exit(99);

	count = bufsize;

	while (count != 0)
	{
		count = read(fd1, buf, bufsize);
		wrote = write(fd2, buf, count);
		if (wrote == -1)
			dprintf(STDERR_FILENO, "Can't write to %s\n", file2), exit(99);
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2), exit(100);
	return (wrote);
}