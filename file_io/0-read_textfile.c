#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print,
 * 0 if file cannot be opened/read, filename is NULL, or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* Open file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/* Read from file */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Clean up */
	free(buffer);
	close(fd);

	return (bytes_written);
}
