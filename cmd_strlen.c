#include "main.h"

/**
  * cmd_strlen - function for string length.
  * @str: pointer to calculate string length.
  *
  * Return: Always 1 on succes
  *		0 on failuer.
  */

int cmd_strlen(char *str)
{
	if (*str != '\0')
	{
		return (1 + cmd_strlen(str + 1));
	}
	return (0);
}
