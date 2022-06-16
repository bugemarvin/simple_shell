#include "main.h"

/**
 * checkSetenv - Built-In checker for setenv
 * @str: String to compare
 *
 * Return: If there's a coincidence or not
 */
int checkSetenv(char *str)
{
	char *cpy = _strdup(str), *name = NULL, *value = NULL;

	if (strcmp(_strtok(cpy, ' '), "setenv") == 0)
	{
		name = _strtok(NULL, ' ');
		value = _strtok(NULL, ' ');
		if (name == NULL || value == NULL)
		{
			write(STDERR_FILENO, "Usage: setenv [VARIABLE] [VALUE]\n", 34);
			free(cpy);
			return (1);
		}
		_setenv(name, value, 1);
		free(cpy);
		return (1);
	}
	free(cpy);
	return (0);
}
