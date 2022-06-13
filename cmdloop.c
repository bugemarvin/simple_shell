#include "shell.h"

/**
 * cmd_getloop - function for looping terminal.
 *
 * Return: always 1 if EOF is not reached.
 */

void cmd_getloop(void)
{
	char **av, *cmdline;
	int cmdstatus;

	do
	{
		printf("$ ");
		cmdline = _getline();
		av = _strtok(cmdline);
		cmdstatus = cmd_getexecute(av);

		free(cmdline);
		free(av);
	} while (cmdstatus);
}
