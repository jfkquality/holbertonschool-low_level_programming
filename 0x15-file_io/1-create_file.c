#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - create file
 * @text_content: text content
 * @filename: file name
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	int wrote;

	if (!filename)
		return (-1);

	/* open */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* read */
	/* count = read(fd, buf, letters); */
	/* buf[count] = '\0'; */

	while (text_content[count])
	{
		count++;
	}
	text_content[count] = '\0';
	/* write */
	wrote = write(fd, text_content, count);
	if (wrote < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
