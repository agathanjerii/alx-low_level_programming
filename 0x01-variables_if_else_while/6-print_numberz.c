#include <stdio.h>
#include <ctype.h>
/**
 * main - prints single numbers of base 1
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
		putchar((x % 10 + '0'));
	putchar('\n');
	return (0);
}
