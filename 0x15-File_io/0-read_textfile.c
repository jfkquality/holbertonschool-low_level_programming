#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"


ssize_t read_textfile(const char *filename, size_t letters)
{

  int fd;
  int count;
  int wrote;
  char *buf;

  if (!filename)
    return (0);

  buf = malloc(letters * sizeof(size_t));

  /* read */
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    {
      printf("Failed to open and read the file.\n");
      exit (1);
    }

  count = read(fd, buf, letters);
  buf[count + 1] = '\0';

  wrote = write(1, buf, count);

  close(fd);

  return (wrote);
}
