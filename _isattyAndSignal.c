#include "main.h"

/**
 * _isattyAndSignal - Looks for signals and checks the isatty function
 */
void _isattyAndSignal(void)
{
	signal(SIGINT, sig_handler);
	if ((isatty(STDIN_FILENO) == 1))
		write(STDOUT_FILENO, "$ ", 3);
}
