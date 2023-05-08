#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Arg 1.
 * @text_content: Arg 2.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int	fd, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (write(fd, text_content, len) == -1)
		return (-1);
	close(fd);
	return (1);
}
