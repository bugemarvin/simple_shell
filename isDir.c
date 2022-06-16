#include "main.h"

/**
 * isDir - Checks if the path is a directory
 * @path: Route of the file
 *
 * Return: If it is a directory or not
 */
int isDir(const char *path)
{
	struct stat st = {0};

	stat(path, &st);
	return (S_ISREG(st.st_mode));
}
