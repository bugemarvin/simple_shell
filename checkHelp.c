#include "main.h"

/**
 * checkHelp - Built-In checker for Help
 * @str: String to compare
 *
 * Return: If there's a coincidence or not
 */
int checkHelp(char *str)
{
	char *cpy = _strdup(str), *name = NULL;

	if (_strcmp(_strtok(cpy, ' '), "help") == 0)
	{
		name = _strtok(NULL, ' ');
		if (name == NULL)
		{
			write(1, "Usage: help [BUILTIN]\nList of Built-Ins\n", 41);
			write(1, "cd\nexit\nsetenv\nunsetenv\nenv\nhelp\n", 34);
			free(cpy);
			return (1);
		}
		else
		{
			while (name != NULL)
			{
				helpCase(name);
				name = _strtok(NULL, ' ');
			}
		}
		free(cpy);
		return (1);
	}
	free(cpy);
	return (0);
}
