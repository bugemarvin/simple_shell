#include "shell.h"

/**
 * cmd_builtins - functions for builtin cmds.
 *
 * Return: Always 1 for success.
 */

int cmd_builtins(void)
{
	return (sizeof(cmd_str_builtin) / sizeof(char *));
}
