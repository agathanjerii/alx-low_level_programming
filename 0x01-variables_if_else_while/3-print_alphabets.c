#include <stdio.h>
#include <ctype.h>
/**
 * main - program that prints alphabet in lowercase then uppercase
 * Return: 0 if successful and non zero if error
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
