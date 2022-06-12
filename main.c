#include "shell.h"

/**
 * main - entry for the shell.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Always 1 for success.
 *		else
 *		-1 for failure.
 */

int main(int ac, char **av)
{
	if (ac != 2)
	{
		cmd_loop();
	}

	return (EXIT_SUCCESS);
}
