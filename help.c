#include "shell.h"

int cmd_help(char **av)
{
	int b;
	printf("Marvin Kurland && Sospeter Nyaga\n");
	printf("C Simple shell @Alx 2022.\n");
	printf("The following are built in:\n");

	for (b = 0; b < cmd_builtins(); b++)
	{
		if (av != 0)
		{
			printf("  %s\n", cmd_str_builtin[b]);
		}
	}

	printf("Use 'man' for more command information programs.\n");
	return 1;
}
