#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: lways 0 Success
 */
int main(void)
{
	int a, i;

	for (a = 00; a <= 99; a++)
	{
		for (i = a + 1; i <= 99; i++)
		{
			putchar(a + '0');
			putchar(i +'0');
			if (a < 8 || i < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
