#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fd;
	ssize_t bytes_written;
	int text_len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file for writing in append mode */
	/* O_WRONLY for write-only access */
	/* O_APPEND to append to end of file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, just check if file exists */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculate length of text_content */
	while (text_content[text_len])
		text_len++;

	/* Write text_content to end of file */
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
