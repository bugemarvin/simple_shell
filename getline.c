#include "shell.h"

/**
 * _getline - funtion that reads an cmd line.
 *
 * Return: -1 for failure and fail to read file.
 *		also failure to include EOF.
 *		upon succes  return 1, _getline & line_chars read.
 */

char *_getline(void)
{
	char *buffer;
	int a, cmdposition = 0, buff_size = CMDBUFSIZE;
	/*
	 * checks if line_chs or size_ln pointers are NULL,
	 *	or the file_b is a valid pointer for a file.
	*/
	buffer = malloc(sizeof(*buffer));
	if (!buffer)
	{
		fprintf(stderr, "$ Error for memory allocation\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		a = getchar();
		if (a == EOF || a == '\n')
		{
			buffer[cmdposition] = '\0';
			return (buffer);
		}
		else
		{
			buffer[cmdposition] = a;
		}
		cmdposition++;
	
		if (cmdposition >= buff_size)
		{
			buff_size = buff_size + CMDBUFSIZE;
			buffer = realloc(buffer, buff_size);
			if (!buffer)
			{
				fprintf(stderr, "$ Error for memory allocation\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
