#include "main.h"

/**
 * checkDir - Built-In checker for cd (cd function)
 * @str: String to compare
 *
 * Return: If there's a coincidence or not
 */
int checkDir(char *str)
{
	char *cpy = _strdup(str), *dir = NULL, *PWD = NULL, *buffer = NULL;
	int builtIn = 0, flag = 0;

	if (_strcmp(_strtok(cpy, ' '), "cd") == 0)
	{
		dir = _strtok(NULL, ' ');
		if (dir == NULL)
		{
			dir = _getenv("HOME");
			flag++;
		}
		if (_strcmp(dir, "-") == 0)
		{
			dir = _getenv("OLDPWD");
			flag++;
		}
		PWD = _getenv("PWD");
		_setenv("OLDPWD", PWD, 1);
		_setenv("PWD", dir, 1);
		if (chdir(dir) != 0)
			perror(dir);
		builtIn++;
	}
	if (flag > 0)
		free(dir);
	free(cpy);
	free(buffer);
	free(PWD);
	return (builtIn);
}
