#include "main.h"

/**
 * *rot13 - (Encodes a string using rot13)
 * @s: string to be encoded
 * Return: Encoded string
 */

char *rot13(char *s)
{
	int str_count, rot;
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char b[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
	        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l','m', 'N',
	        'O','P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z', 'A', 'B',
	        'C', 'D', 'E','F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	for (str_count = 0; s[str_count] != '\0'; str_count++)
	{
		for (rot = 0; rot < 53; rot++)
		{
			if (a[rot] == s[str_count])
			{
				s[str_count] = b[rot];
				break;
			}
		}
	}
	return (s);
}
