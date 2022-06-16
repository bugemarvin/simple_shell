#include "main.h"


/**
 * _unsetenv - deletes the variable name from the environment
 * @name: the name of the variable
 *
 * Return: 0 on success or -1 on error
 */
int _unsetenv(char *name)
{
	size_t len = 0;
	int i = 0, flag = 0;

	len = _strlen(name);
	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, len) == 0)
		{
			while (environ[i] != NULL)
			{
				environ[i] = environ[i + 1];
				i++;
			}
			flag++;
			break;
		}
		i++;
	}
	if (flag > 0)
		return (0);
	return (-1);
}
