#include "shell.h"

/**
 * cmd_cd - main biultin function to change directory.
 * @av: as the argument count.
 *
 * Return: Always 1 for succes.
 */

int cmd_cd(char **av)
{
	if (av[1] == NULL)
	{
		fprintf(stderr, "$ Error! Argument requiered to change directory\n");
	}
	else
	{
		if (chdir(av[1]) != 0)
		{
			perror("$");
		}
	}
	return (1);
}
