#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Character to be used
 *
 * Return: 1 if alphabetic, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
