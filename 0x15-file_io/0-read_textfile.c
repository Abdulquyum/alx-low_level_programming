#include "main.h"

/**
 * read_textfile - prgram to reads text file
 *
 * @filename: the of file to be read
 * @letters: number of etters to read and print
 *
 * Return: number of letters else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t	readtxt, writetxt;

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buff = malloc(sizeof(letters) + 1);

	readtxt = read(fd, buff, letters);

	close(fd);

	if (readtxt == -1)
		free(buff);

	buff[readtxt] = '\0';

	writetxt = write(STDOUT_FILENO, buff, readtxt);

	free(buff);

	if (writetxt == -1)
		return (0);

	if (writetxt != readtxt)
		return (0);

	return (readtxt);
}
