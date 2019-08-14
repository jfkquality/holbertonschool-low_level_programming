#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - read text file, write to stdout
 * @filename: file name
 * @letters: num of chars to read/write
 *
 * Return: num of chars read/write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int count;
	int wrote;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(letters * sizeof(size_t));

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* read */
	count = read(fd, buf, letters);
	buf[count] = '\0';

	/* write */
	wrote = write(STDOUT_FILENO, buf, count);
	if (wrote < 0 || wrote != count)
		return (0);

	close(fd);

	return (wrote);
}
