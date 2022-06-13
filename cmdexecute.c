#include "shell.h"

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
