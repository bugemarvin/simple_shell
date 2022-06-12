#ifndef SHELL_H
#define SHELL_H

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

#define _CMDBUFSIZE 1024
#define _CMD_TOKN_BUFSIZE 64
#define _CMD_TOKN_DELIMT " \t\r\n\a"

int _putchar(char c);
void _prompt(char *cmd);
char *_getline(void);

#endif
