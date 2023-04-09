#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text to an exiting file
 * @filename: file name
 * @text_content: text content
 * Return: return 1 on success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _file, write_file, len;

	if (filename == NULL)
		return (-1);
	_file = open(filename, O_RDWR | O_APPEND, 0664);
	if (_file == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		write_file = write(_file, text_content, len);
		if (write_file != len)
			return (-1);
	}
	close(_file);
	return (1);
}
