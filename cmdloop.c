#include "shell.h"

/**
 * _cmdloop - function for looping terminal.
 *
 * Return: always 1 if EOF is not reached.
 */

void _cmdloop(void)
{
	char **av, cmdline;
	int cmdstatus;

	do
	{
		printf("$ ");
		cmdline = _getline();
		av = _strtok(cmdline);
		cmdstatus = _cmdexecute(av);

		free(cmdline);
		free(av);
	} while (cmdstatus);
}
