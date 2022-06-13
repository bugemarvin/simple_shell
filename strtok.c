#include "shell.h"
#define CMD_TOKN_BUFF_SIZE 64
#define CMD_TOKN_DELIMT " \t\r\n\a"

/**
 * _strtok - function to split line.
 * @line: chars for spliting.
 *
 * Return: Always 1 for success.
 *		-1 for NULL/failure.
 */

char **_strtok(char *line)
{
	char *token, **tokens;
	int buff_size = CMD_TOKN_BUFF_SIZE, cmdposition = 0;

	tokens = malloc(sizeof(*tokens) * buff_size);

	if (!tokens)
	{
		fprintf(stderr, "$ Error failed memory allocation");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, CMD_TOKN_DELIMT);
	while (token != NULL)
	{
		tokens[cmdposition] = token;
		cmdposition++;

		if (cmdposition >= buff_size)
		{
			buff_size = buff_size + CMD_TOKN_BUFF_SIZE;
			tokens = realloc(tokens, sizeof(*tokens) * buff_size);
			if (!tokens)
			{
				fprintf(stderr, "$ Error failed memory allocation");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, CMD_TOKN_DELIMT);
	}
	tokens[cmdposition] = NULL;
	return (tokens);
}
