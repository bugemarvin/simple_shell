#include "shell.h"

/**
 * _prompt - function for the comandline interpreter `C` std in/out.
 * @av: argument values/vector.
 *
 * Return: Always 1 on succes.
 *		-1 for NUL or failure.
 */

int _prompt(char **av)
{
	pid_t cmdpid;
	pid_t cmdwpid = 1;
	int cmds_status;

	cmdpid = fork();
	if (cmdpid == 0)
	{
		if (execvp(av[0], av) == -1)
		{
			perror("$ Error");
		}
		exit(EXIT_FAILURE);
	}
	else if (cmdpid < 0)
	{
		perror("$ Error");
	}
	else
	{
		if (cmdwpid != 0)
		{
			do {
				cmdwpid = waitpid(cmdpid, &cmds_status, WUNTRACED);
			} while (!WIFEXITED(cmds_status) && !WIFSIGNALED(cmds_status));
		}
	}
	return (1);
}
