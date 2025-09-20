#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or exit with specific codes on failure
 */

int main(int argc, char *argv[])

{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Create/open destination file for writing with permissions rw-rw-r-- */
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		exit(99);
	}

	/* Copy file contents */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			if (close(fd_from) == -1)
			{
				dprintf(2, "Error: Can't close fd %d\n", fd_from);
				exit(100);
			}
			if (close(fd_to) == -1)
			{
				dprintf(2, "Error: Can't close fd %d\n", fd_to);
				exit(100);
			}
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		if (close(fd_to) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
		exit(98);
	}

	/* Close file descriptors */
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
