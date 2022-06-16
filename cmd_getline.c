#include "main.h"

/**
 * cmd_getline - funtion that reads an entier line.
 * @t: stores address of buffer for texts.
 * @l: stores size of byte using malloc for line_char.
 * @fn: pointer to a valid file.
 *
 * Return: -1 for failure and fail to read file.
 *		also failure to include EOF.
 *		upon succes return _getline & line_chars read.
 */

ssize_t cmd_getline(char **t, size_t *l, FILE *fn)
{
	char *buffer;
		if (t == NULL || l == NULL || fn == NULL)
		{
			return (-1);
		}
	*t[0] = '\0';
	buffer = malloc(sizeof(*buffer));
	while (fgets(buffer, sizeof(buffer), fn) != NULL)
	{
		cmd_strcat(*t, buffer);
		return (cmd_strlen(*t));
	}
	return (-1);
	free(buffer);
}
