#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @ac: Arg 1.
 * @av: Arg 2.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int		fd_in, fd_out, nbyte;
	char	buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_in = open(av[1], O_RDONLY);
	fd_out = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((nbyte = read(fd_in, buffer, 1024)))
	{
		if (fd_in == -1 || nbyte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			return (98);
		}
		if (write(fd_out, buffer, nbyte) == -1 || fd_out == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			return (99);
		}
	}
	if (close(fd_in) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in);
		return (100);
	}
	if (close(fd_out) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out);
		return (100);
	}
	return (0);
}
