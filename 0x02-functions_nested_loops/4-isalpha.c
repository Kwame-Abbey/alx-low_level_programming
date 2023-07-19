#include "main.h"

/**
 * _isalpha - (Checks for an alphabetic character).
 *
 * @c: The character to return.
 *
 * Return: 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
