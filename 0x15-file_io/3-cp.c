#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#define SIZE 1024

/**
 * read_file - read file
 * @buffer: buffer
 * @file1: file name
 */
void read_file(char *buffer, char *file1)
{
	int reader, _file;

	_file = open(file1, O_RDWR);
	if (_file == -1)
	{
		printf("Error: Can't read from file %s\n", file1);
		close(_file);
		exit(98);
	}
	reader = read(_file, buffer, SIZE);
	if (reader == -1)
	{
		printf("Error: can't read from file %s\n", file1);
		exit(98);
	}
	buffer[reader] = '\0';
	if (close(_file) == -1)
	{
		printf("Error: Can't close fd %d\n", _file);
		exit(100);
	}
}

/**
 * main - program entry
 * @argc: argc
 * @argv: argv
 * Return: zero
 */

int main(int argc, char *argv[])
{
	char buffer[SIZE], *file1, *file2;
	int writing, _file2;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = argv[1];
	file2 = argv[2];
	read_file(buffer, file1);
	_file2 = open(file2, O_CREAT | O_RDWR | O_TRUNC, 664);
	if (_file2 == -1)
	{
		printf("Error: Can't write to %s\n", file2);
		exit(99);
	}
	writing = write(_file2, buffer, strlen(buffer));
	if (writing == -1)
	{
		printf("Error: Can't write to %s\n", file2);
		exit(99);
	}
	if (close(_file2) == -1)
	{
		printf("Error: can't close fd %d\n", _file2);
		exit(100);
	}
	return (0);
}
