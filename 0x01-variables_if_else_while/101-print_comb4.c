#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints combination of 3 digits
 * Return: Always 0
 */
int main(void)
{
	int c, b, a;

	for (c = '0'; c <= '9'; c++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				if (c < b && b < a)
				{
					putchar(c);
					putchar(b);
					putchar(a);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
