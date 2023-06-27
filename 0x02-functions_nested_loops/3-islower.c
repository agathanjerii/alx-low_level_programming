#include "main.h"
/**
 *  _islower - Checks if characters are lowercase, follwed by newline
 *  @c: Character to be checked
 *
 *  Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
