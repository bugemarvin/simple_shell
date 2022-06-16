#include "main.h"

/**
 * _checkChars - Looks for a character in the buffer
 * @str: The buffer
 * Return: If there's a char or not
 */
int _checkChars(char *str)
{
	int i = 0, r = -1;

	if (str[0] == '#')
		return (r);
	while (str[i])
	{
		if (str[i] != 32 && str[i] != 10 && str[i] != '\t' && str[i] != '#')
		{
			r = 0;
			if (str[0] == ' ' && str[1] != ' ')
			{
				str = _strtok(str, ' ');
			}
			break;
		}
		if (str[i] == '#')
			break;
		i++;
	}
	return (r);
}
