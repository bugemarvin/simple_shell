#include "shell.h"

/**
 * _strtok - function to split line.
 * @line: chars for spliting.
 *
 * Return: Always 1 for success.
 *		-1 for failure.
 */

char **_strtok(char *line)
{
	char *token, **tokens;
	int buff_size = CMDBUFSIZE, cmdposition = 0;

	tokens = malloc(sizeof(*tokens) * buff_size);

	if (!token)
	{
		fprintf(stderr, "$ Error failed memory allocation");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, _CMD_TOKN_DELIMT);	
	while (token != 0)
	{
		tokens[cmdposition] = token;
		cmdposition++;

		if (cmdposition >= buff_size)
		{
			buff_size = buff_size + CMD_TOKN_BUFSIZE;
			tokens = realloc(tokens, sizeof(*tokens) * buff_size);
			if (!tokens)
			{
				fprintf(stderr, "$ Error failed memory allocation");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, _CMD_TOKN_DELIMT);
	}
	tokens[cmdposition] = NULL;
	return (tokens);
}
