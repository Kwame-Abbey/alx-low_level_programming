#include "main.h"

/**
 * _isalpha - (Checks for alphabetic character)
 * @c: Character to be checked
 * Return: 1 success, 0 fails
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
