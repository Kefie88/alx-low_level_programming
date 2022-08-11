#include "main.h"
/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * create file must have rw------ permission
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if the file already exists, truncate it
 * Return -1 if filename is NULL
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t nletters;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nletters = write(file, text_content, _strlen(text_content));
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
