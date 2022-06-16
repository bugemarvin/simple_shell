#include "main.h"

/**
 * _strcpy - Takes a source string and copies it to the dest string
 * @dest: Dest string
 * @src: Source string
 *
 * Return: Returns a copy of the source string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
