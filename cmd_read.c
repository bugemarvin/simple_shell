#include "shell.h"
#define CMD_BUFFS_SIZE 1024

/**
 * _getline - funtion that reads an cmd line.
 *
 * Return: -1 for failure and fail to read file.
 *		also failure to include EOF.
 *		upon succes  return 1, _getline & line_chars read.
 */

char *cmd_readline(void)
{
	char *buffer;
	int a;
	size_t buff_size = CMD_BUFFS_SIZE, cmd_positions = 0;

	buffer = malloc(sizeof(*buffer));
	if (!buffer)
	{
		fprintf(stderr, "$ Error for memory allocation\n");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		a = getchar();
		if (a == EOF)
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else if (a == '\n')
		{
			buffer[cmd_positions] = '\0';
			return (buffer);
		}
		else
		{
			buffer[cmd_positions] = a;
		}
		cmd_positions++;
		if (cmd_positions >= buff_size)
		{
			buff_size = buff_size + CMD_BUFFS_SIZE;
			buffer = realloc(buffer, buff_size);
			if (!buffer)
			{
				fprintf(stderr, "$ Error for memory allocation\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
