#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reading text from a file
 * @filename: name of the file to read
 * @letters: letter count in the file
 * Return: return operation in the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_file;
	char *mem;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	mem = malloc(letters * sizeof(char));
	while ((read_file = read(fd, mem, letters)) > 0)
	{
		write(STDOUT_FILENO, mem, read_file);
	}
	return (read_file);
}
