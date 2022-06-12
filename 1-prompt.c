#include "shell.h"

/**
 * main - function for the comandline interpreter `C` std in/out.
 * @av: argument values/vector.
 * @ac: argument counts.
 *
 * Return: Always 1 on succes.
 *		-1 for NUL or failure.
 */

int main(int ac, char **av)
{
	size_t size_buff = 0;
	char *buff;

	buff = malloc(sizeof(buff) * size_buff + 1);

	if (buff == NULL)
	{
		exit(98);
	}

	do
	{
		if (ac != 2)
		{
			printf("$ ");
			if (av!= 0)
			{
				if (getline(&buff, &size_buff, stdin) != 0)
				{
					printf("%s", buff);
				}
			}
		}
		if (buff[size_buff] == EOF)
		{
			return (-1);
			exit(1);
		}
	} while (buff[size_buff] != EOF);
	printf("\n");
	free(buff);
	return (0);
}
