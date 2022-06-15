#include "shell.h"

/**
 * _getline - funtion that reads an entier line.
 * @tx: stores address of buffer for texts.
 * @len: stores size of byte using malloc for line_char.
 * @fn: pointer to a valid file.
 *
 * Return: -1 for failure and fail to read file.
 *		also failure to include EOF.
 *		upon succes return _getline & line_chars read.
 */

ssize_t cmd_getline(char **tx, size_t *len, FILE * fn)
{
	char *buffer;
		if (tx == NULL || len == NULL || fn == NULL)
		{
			return (-1);
		}
	*tx[0] = '\0';
	buffer = malloc(sizeof(*buffer));
	while (getchar())
	{
		cmd_strcat(*tx, buffer);
		return (cmd_strlen(*tx));
	}
	return (-1);
	free(buffer);
}
