#include "main.h"
#include <stdlib.h>

/**
 * argstostr - (Concatenates all arguments of your program)
 * @ac: Arguments count
 * @av: Argument vector
 * Return: Pointer to a new string or Null
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, k;

	if (ac == 0)
		return (NULL);

	for (i = len = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = j = k = 0; k < len; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			str[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < len - 1)
			str[k] = av[i][j];

	}

	str[k] = '\0';
	return (str);
}
