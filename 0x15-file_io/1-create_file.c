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
	_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (_file == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		write_file = write(_file, text_content, len);
		if (len != write_file)
			return (-1);
	}
	close(_file);
	return (1);
}
