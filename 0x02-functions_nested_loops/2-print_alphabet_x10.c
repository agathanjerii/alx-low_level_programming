#include "main.h"
/**
 * print_alphabet_x10 - prints 10x lowercase alphabet, folowed by a new line
 */
void print_alphabet_x10(void)
{
	int new = 0;
	char l;

	while (new <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		new++;
	}
}
