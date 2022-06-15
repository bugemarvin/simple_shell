#include "shell.h"

/**
 * cmd_getloop - function for looping terminal.
 *
 * Return: always 1 if EOF is not reached.
 */

void cmd_getloop(void)
{
	char **av, *cmd_line;
	int cmd_status;

	do {
		printf("Alx-Shell~:$ ");
		cmd_line = cmd_readline();
		av = _strtok(cmd_line);
		cmd_status = cmd_getexecute(av);
		printf("%s", cmd_line);

		free(cmd_line);
		free(av);
	} while (cmd_status);
}
