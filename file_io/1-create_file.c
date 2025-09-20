#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)

{
	int fd;
	ssize_t bytes_written;
	int text_len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Create/open file with permissions rw------- (0600) */
	/* O_CREAT creates file if it doesn't exist */
	/* O_WRONLY for write-only access */
	/* O_TRUNC truncates file if it already exists */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, create empty file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculate length of text_content */
	while (text_content[text_len])
		text_len++;

	/* Write text_content to file */
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written == -1 || bytes_written != text_len)
	{
		close(fd);
		return (-1);
	}

	/* Close file */
	close(fd);
	return (1);
}
