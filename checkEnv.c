#include "main.h"

/**
 * checkEnv - Built-In checker for env
 * @str: String to compare
 *
 * Return: If there's a coincidence or not
 */
int checkEnv(char *str)
{
	char *cpy = _strdup(str);

	if (strcmp(_strtok(cpy, ' '), "env") == 0)
	{
		free(cpy);
		printenv();
		return (1);
	}
	free(cpy);
	return (0);
}
