#include <stdio.h>
#include <ctype.h>
/**
 * main - print all letters in lowercase except q and e
 * Return: 0 if success
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
