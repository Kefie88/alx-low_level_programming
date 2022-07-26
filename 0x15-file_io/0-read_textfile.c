#include "main.h"
/**
 * read_textfile - reads  text file and prints to the POSIX standart output
 * @filename: name of file
 * @letters: number of letters it it should read and print
 * Return: actual number of letters it should read and print
 * return 0 if the file can not opened or read
 * return 0 if file name is NULL
 * return 0 if write failes or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, 0_RDWR);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(file, buffer, letters);
	if (rcount == -1)
		return (0);
	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);
	close(file);
	return (wcount);
}
