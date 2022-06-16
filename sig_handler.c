#include "main.h"

/**
 * sig_handler - Signal handler for ^C
 * @signo: Signal number
 */
void sig_handler(__attribute__((unused))int signo)
{
	write(STDOUT_FILENO, "\n$ ", 4);
}
