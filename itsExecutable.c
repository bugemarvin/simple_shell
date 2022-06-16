#include "main.h"

/**
 * itsExecutable - Checks if a given path is an executable
 * @path: Route of the file
 *
 * Return: If it is an executable file or not
 */
int itsExecutable(char *path)
{
	if (isDir(path) == 0)
	{
		if (path[0] == '/')
			perror(path);
		else
			perror(path);
		return (1);
	}
	if (access(path, X_OK))
		return (2);
	else
		return (0);
}
