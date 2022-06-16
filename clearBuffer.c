#include "main.h"

/**
 * clearBuffer - Removes the '\n' char, and looks for tabulations
 * @str: The buffer
 * @counter: Length of the string
 *
 * Return: The clean buffer
 */
char *clearBuffer(char *str, int counter)
{
	str[counter - 1] = '\0';
	str = searchAndDestroy(str);
	str = comments(str);
	return (str);
}
