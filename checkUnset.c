#include "main.h"

/**
 * checkUnset - Built-In checker for unsetenv
 * @str: String to compare
 *
 * Return: If there's a coincidence or not
 */
int checkUnset(char *str)
{
	char *cpy = _strdup(str), *token = NULL;

	if (strcmp(_strtok(cpy, ' '), "unsetenv") == 0)
	{
		token = _strtok(NULL, ' ');
		if (token == NULL)
		{
			write(STDERR_FILENO, "Usage: unsetenv [VARIABLE]\n", 28);
			free(cpy);
			return (1);
		}
		if (_unsetenv(token) == -1)
		{
			write(STDERR_FILENO, "can't unset non-existent variable\n", 35);
			free(cpy);
			return (1);
		}
		free(cpy);
		return (1);
	}
	free(cpy);
	return (0);
}
