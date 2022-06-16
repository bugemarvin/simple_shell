#include "main.h"

/**
 * comments - Checks for comments
 * @str: String to traverse
 *
 * Return: The clean string in case of comments, if not, the same one
 */
char *comments(char *str)
{
	int i = 0, j = 0, hashtag = 0, flag = 0;

	while (str[j])
	{
		if (str[j] == ' ' && str[j + 1] == '#')
		{
			hashtag++;
			break;
		}
		j++;
	}
	if (hashtag == 0)
		return (str);
	while (str[i])
	{
		if (flag == 1)
		{
			str[i] = ' ';
			i++;
			continue;
		}
		if (str[i] == ' ' && str[i + 1] == '#')
		{
			flag++;
			i++;
			continue;
		}
		i++;
	}
	return (str);
}
