#include "main.h"

/**
 * main - copies the content of a file to another
 *
 * @argc: argument count
 * argv: argument vector
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, i, fd1_close, fd2_close;
	char *buffer[BUFF_SIZE];
	ssize_t readtxt, writetxt;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	if (argv[2] != NULL)
		open(argv[2], O_TRUNC);

	if (argv[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT);

	if (fd1 == -1 || fd2 == -1)
		return (-1);

	for (i = 0; *argv[1] != '\0'; i++)
		buffer[i] = argv[1]++;

	readtxt = read(fd1, buffer, BUFF_SIZE);

	if (readtxt == -1)
		return (-1);

	writetxt = write(fd2, buffer, readtxt);

	if (writetxt < 0)
		return (-1);	

	fd1_close = close(fd1);
	fd2_close = close(fd2);

	if (fd1_close == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd1);
		exit(100);
	}
	else if (fd2_close == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
