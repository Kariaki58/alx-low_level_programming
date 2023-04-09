#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read all content of a text file
 * @filename: filename
 * @letters: letters
 * Return: return POSIX;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _file, file_read;
	ssize_t file_content;
	char *buf;

	if (filename == NULL)
		return (0);
	_file = open(filename, O_RDONLY);
	if (_file == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	file_read = read(_file, buf, letters);
	if (file_read == -1)
	{
		free(buf);
		return (0);
	}
	buf[file_read] = '\0';
	close(_file);
	file_content = write(STDOUT_FILENO, buf, file_read);
	if (file_content == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (file_content);
}
