#include <stdio.h>
#include <ctype.h>
/**
 * main - program that prints digits 0 to 9
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
