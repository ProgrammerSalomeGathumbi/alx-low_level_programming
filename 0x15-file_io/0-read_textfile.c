#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
  * read_textfile -  reads  text file and prints  to the POSIX std output.
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (r);
}
