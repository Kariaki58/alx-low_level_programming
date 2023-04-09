#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * create_file - creating a file
 * @filename: filename
 * @text_content: should be in the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int _file, write_file, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		_file = open(filename, O_CREAT | O_WRONLY, 0600);
	}
	_file = open(filename, O_CREAT | O_WRONLY, 0600);
	if (_file == -1)
		return (-1);
	len = strlen(text_content) + 1;
	text_content[len] = '\0';
	write_file = write(_file, text_content, len);
	if (write_file == -1)
	{
		close(_file);
		return (-1);
	}
	close(_file);
	return (1);
}
