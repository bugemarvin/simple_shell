#include "shell.h"

/**
 * prompt - function for the comandline interpreter `C` std in/out.
 * @av: argument values/vector.
 * @ac: argument counts.
 *
 * Return: Always 1 on succes.
 *		-1 for NUL or failure.
 */

int _prompt(char **av)
{
	pid_t cmdpid;
	pid_t cmdwpid = 1;
	int cmdstatus;

	cmdpid = fork();
	if (cmdpid == 0)
	{
		if (execvp(av[0], av) == -1)
		{
			perror("$ Error");
		}
		exit(EXIT_FAILURE);
	}
	else if(cmdpid < 0)
	{
		perror("$ Error");
	}
	else
	{
		if (cmdwpid != 0)
		{
			do
			{
				cmdwpid = waitpid(cmdpid, &cmdstatus, WUNTRACED);
			} while (!WIFEXITED(cmdstatus) && !WIFSIGNALED(cmdstatus));
		}
	}
	return 1;
}
