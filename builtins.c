#include "shell.h"

char *cmd_str_builtin[] =
{
	"cd",
	"help",
	"exit"
};

int (*cmd_func_builtin[]) (char **) =
{
	&cmd_cd,
	&cmd_help,
	&cmd_exit
};

/**
 * cmd_builtins - functions for builtin cmds.
 *
 * Return: Always 1 for success.
 */

int cmd_builtins()
{
	return (sizeof(cmd_str_builtin) / sizeof(char *));
}

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

int cmd_exit(char **av)
{
	if (av == NULL)
		return (1);
	return (0);
}

int cmd_getexecute(char **av)
{
	int c;

	if (av[0] == NULL)
	{
		return (1);
	}

	for (c = 0; c < cmd_builtins(); c++)
	{
		if (strcmp(av[0], cmd_str_builtin[c]) == 0)
		{
			return (*cmd_func_builtin[c])(av);
		}
	}
	return _prompt(av);
}
