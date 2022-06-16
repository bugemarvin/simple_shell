#include "main.h"

/**
 * cmd_strtok - function to split line.
 * @s1: line of a string to be split.
 * @s2: bytes of string arg delimited subsequence call for s1.
 *
 * Return: token for a pointer if str is not NULL
 *		NULL if there are no tokens.
 */

char *cmd_strtok(char *s1, const char *s2)
{
	size_t a;
	char *token;

	token = malloc(sizeof(*token));

	for (a = 0; token[a] != 0; a++)
		;

	if (token != 0)
	{
		token = strtok(s1, s2);
			token = strtok(NULL, s2);
	}
	else
	{
		exit(1);
	}
	return (token);
	free(token);
}
