#include "main.h"
#define SIZE 1024
/**
 * main - main function
 * @arg_count: arg count
 * @arg_list: arg_list
 * Return: return
 */

int main(int arg_count, char *arg_list[])
{
	int _file1, _file2, bytes, close_1, close_2;
	char buffer[SIZE];

	if (arg_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_file1 = open(arg_list[1], O_RDONLY);
	if (_file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_list[1]);
		exit(98);
	}
	_file2 = open(arg_list[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes = read(_file1, buffer, SIZE)) > 0)
		if (_file2 < 0 || write(_file2, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg_list[2]);
			close(_file1);
			exit(99);
		}
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_list[1]);
		exit(98);
	}
	close_1 = close(_file1);
	close_2 = close(_file2);
	if (close_1 < 0 || close_2 < 0)
	{
		if (close_1 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file1);
		if (close_2 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file2);
			exit(100);
		}
	}
	return (0);
}
