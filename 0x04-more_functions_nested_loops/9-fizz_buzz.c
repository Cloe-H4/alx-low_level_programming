#include <stdio.h>

/**
 * main - print numbers 1-100 with specifications
 *
 * Description: prints Fizz when number is a multiple
 * of 3, Buzz for multiple of 5 and FizzBuzz for
 * multiple of 15.
 * Return: 0 as success
 */

int main(void)
{
	int num;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("%s%s", fizz, buzz);
		else if (num % 3 == 0)
			printf("%s", fizz);
		else if (num % 5 == 0)
			printf("%s", buzz);
		else
			printf("%d", num);

		printf(" ");
	}
	printf("\n");
}
