#include "main.h"

/**
 * create_variable - creates a variable
 * @name: the name of the variable
 * @value: the value of the variable
 *
 * Return: the new variable
 */
char *create_variable(char *name, char *value)
{
	char *var = NULL, *aux = NULL;

	aux = str_concat(name, "=");
	if (!aux)
		return (NULL);
	var = str_concat(aux, value);
	if (!var)
		return (NULL);
	free(aux);
	return (var);
}
