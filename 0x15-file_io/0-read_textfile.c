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
	int _file;
	char *buffer;
	ssize_t POSIX;
	
	_file = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * (letters - 2));
	POSIX = read(_file, buffer, letters);
	if (filename == NULL)
		return (0);
	if (_file == -1 || POSIX == -1)
	{
		free(buffer);
		close(_file);
		return (0);
	}
	printf("%s", buffer);
	return (POSIX);
}
