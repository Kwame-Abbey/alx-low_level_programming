#include "main.h"

/**
 * *leet - (Encodes a string into 1337)
 * @str: String to be encoded
 * Return: Encoded String
 */

char *leet(char *str)
{
	int str_count, leet_count;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	str_count = 0;
	while (str[str_count] != '\0')
	{
		leet_count = 0;
		while (leet_count < 10)
		{
			if (leet_letters[leet_count] == str[str_count])
			{
				str[str_count] = leet_nums[leet_count];
			}
			leet_count++;
		}
		str_count++;
	}
	return (str);
}
