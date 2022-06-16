#include "main.h"

/**
 * _getenv - Uses the environ variable in order to get a variable
 * @name: name of the variable
 *
 * Return: Returns the value of the variable or NULL
 */
char *_getenv(const char *name)
{
	char *token, *value, *cpy;
	size_t i = 0;

	if (!name)
		exit(1);
	while (environ[i] != NULL)
	{
		cpy = _strdup(environ[i]);
		token = _strtok(cpy, '=');
		if (_strcmp(name, token) == 0)
		{
			token = _strtok(NULL, '=');
			value = malloc(sizeof(char) * _strlen(token) + 1);
			if (!value)
			{
				free(cpy);
				return (NULL);
			}
			_strcpy(value, token);
			free(cpy);
			break;
		}
		i++;
		free(cpy);
	}
	return (value);
}
