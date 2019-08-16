#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - append_text_to_file
 * @text_content: text content
 * @filename: file name
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	int wrote;

	if (!filename)
		return (-1);

	/* open write only */
	fd = open(filename,  O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);
	while (text_content[count])
		count++;

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
