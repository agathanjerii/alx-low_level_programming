#include <stdio.h>
#include <ctype.h>
/**
 * main- program that prints the alphabet in lowercase
 * Return: 0 if successful nad non zero if not
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
