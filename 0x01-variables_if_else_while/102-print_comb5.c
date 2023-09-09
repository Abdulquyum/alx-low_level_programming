#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: lways 0 Success
 */
int main(void)
{
	int a, i;

	for (a = 10; a < 100; a++)
	{
		for (i = a + 10; i < 100; i++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (a <= 98 && i <= 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
