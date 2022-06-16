#include "main.h"

/**
 * checkExit - Built-In checker for exit
 * @str: String to compare
 *
 * Return: If there's a coincidence or not
 */
int checkExit(char *str)
{
	char *cpy = _strdup(str);

	if (strcmp(_strtok(cpy, ' '), "exit") == 0)
	{
		free(cpy);
		return (1);
	}
	free(cpy);
	return (0);
}
<<<<<<< HEAD
=======
/**
 * cmd_exit - Built-In for ctrl + c;
 * ctrl + c; keyboard shortcut
 *
 * Return: Always 98 to end program.
 */
int cmd_exit(void)
{
	printf("Goodbye programmer!\n");
	exit(98);
}
>>>>>>> 9f619753a3792243e485d971ea11511724376c19
