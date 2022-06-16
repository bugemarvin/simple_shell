#include "main.h"

/**
 * _setenv - changes or adds an environment variable
 * @name: the name of the variable
 * @value: the value of the variable
 * @overwrite: if the variable most be overwrited or not
 *
 * Return: 0 on success or -1 on error
 */
int _setenv(char *name, char *value, int overwrite)
{
	size_t len;
	int i = 0;

	len = _strlen(name);
	while (environ[i] != NULL)
	{
		if ((strncmp(environ[i], name, len) == 0) && overwrite != 0)
		{
			if (overwrite == 2)
			{
				free(environ[i]);
			}
			environ[i] = create_variable(name, value);
			if (!environ[i])
				return (-1);
			return (0);
		}
		i++;
	}
	environ[i] = create_variable(name, value);
	if (!environ[i])
		return (-1);
	environ[i + 1] = NULL;
	return (0);
}
