#include "main.h"

/**
 * append_text_to_file - appens text to already created file
 *
 * @filename: poinhter to file name
 * @text_content: pointer to content
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t appendtxt;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	fd = open(filename, O_APPEND);

	if (fd == -1)
		return (-1);

	appendtxt = write(fd, text_content, strlen(text_content));

	if (appendtxt == -1)
		return (-1);

	close(fd);

	return (1);
}
