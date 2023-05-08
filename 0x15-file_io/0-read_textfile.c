#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Arg 1.
 * @letters: Arg 2.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int	fd;
	int	*c;

	if (!filename)
		return (0);
	letters = 0;
	c = malloc(letters);
	fd = open(filename, O_CREAT | O_RDONLY);
	if (fd == -1 || !c)
		return (0);
	if (read(fd, c, letters) != write(1, c, letters))
		return (0);
	return (letters);
}
