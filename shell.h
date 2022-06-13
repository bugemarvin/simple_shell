#ifndef SHELL_H_INCLUDED
#define SHELL_H_INCLUDED

/*
 * Authors: Marvin Kurland.
 *		Sospeter Nyaga.
 *
 * 2022 (c) Alx project.
 * Prototypes for `C` Simple Shell.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>
#include <pwd.h>
#include <glob.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int _putchar(char c);
int _prompt(char **av);
char *_getline(void);
void cmd_getloop(void);
char **_strtok(char *line);
int cmd_cd(char **av);
int cmd_help(char **av);
int cmd_exit(char **av);
int cmd_builtins();
int cmd_getexecute(char **av);

#endif
