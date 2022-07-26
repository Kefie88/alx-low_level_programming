#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 * do not create the file if it does not exist
 * Return -1 if filename is NULL
 * if text_content is NULL do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);
	if (status == -1)
		return (-1);
	close(fd);
	return (1);
}
