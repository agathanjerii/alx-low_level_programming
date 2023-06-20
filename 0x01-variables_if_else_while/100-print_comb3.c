#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int a, b;

	/*loop through a,1st digit,lowest of the 2, highest possible is 8*/
	for (a = 0 ; a <= 8 ; a++)
	{
		for (b = a + 1 ; b <= 9 ; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
