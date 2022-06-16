#include "main.h"

/**
 * _checkBuiltIn -Function that Checks if there's a Built-In in the buffer or not
 * @str: String to traverse
 *
 * Return: If there's a coincidence or not
 */
int _checkBuiltIn(char *str)
{
	if (checkDir(str) == 1)
		return (2);
	if (checkExit(str) == 1)
		return (1);
	if (checkEnv(str) == 1)
		return (3);
	if (checkUnset(str) == 1)
		return (4);
	if (checkSetenv(str) == 1)
		return (5);
	if (checkHelp(str) == 1)
		return (6);
	return (0);
}
