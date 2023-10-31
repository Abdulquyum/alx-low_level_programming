#include "main.h"

/**
 * create_file - creates a new file
 *
 * @filename: pointer to file name
 * @text_content: pointer to contents of the created file
 *
 * Return: 1 (Success) else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int writetxt;

	if (text_content == NULL)
		fd = open(filename, O_CREAT | O_RDWR);

	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	writetxt = write(fd, text_content, strlen(text_content));

	if (writetxt < 0)
		return (-1);

	close(fd);

	return (1);
}
