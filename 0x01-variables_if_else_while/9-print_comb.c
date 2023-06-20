#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar((y % 10) + '0');
		if (y == 9)
		/*continue printing comma and space except if x == 9*/
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
