#include "main.h"

/**
 * *cap_string - (Capitalize all words of a string)
 * @str: String to be capitalized
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		    || str[i] == ',' || str[i] == ';' || str[i] == '.'
		    || str[i] == '!' || str[i] == '?' || str[i] == '\"'
		    || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
