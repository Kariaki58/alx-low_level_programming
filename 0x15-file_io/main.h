#ifndef __MAIN__
#define __MAIN__
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int set_bit(unsigned long int *n, unsigned int index);
#endif
