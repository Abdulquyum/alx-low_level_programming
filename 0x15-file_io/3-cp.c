#include "main.h"

/**
 * main - copies the content of a file to another
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int fd, fd1, fd2;
	char buffer[BUFF_SIZE];
	ssize_t readtxt, writetxt;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	if (argv[2] != NULL)
		fd = open(argv[2], O_WRONLY, O_TRUNC);

	if (fd == -1)
		return (-1);

	if (argv[1] == NULL || argv[1][0] == '\0')
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (argv[2] == NULL || argv[2][0] == '\0')
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT);

	if (fd1 == -1 || fd2 == -1)
		return (-1);

	strcpy(buffer, argv[1]);

	while ((readtxt = read(fd1, buffer, BUFF_SIZE)) > 0)
	{
		writetxt = write(fd2, buffer, readtxt);

		if (readtxt != writetxt)
		{
			close(readtxt);
			exit(1);
		}
	}

	if (readtxt == -1)
	{
		close(readtxt);
		close(writetxt);
		exit(1);
	}

	if (close(fd1) == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd1);
		exit(100);
	}
	else if (close(fd2) == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
