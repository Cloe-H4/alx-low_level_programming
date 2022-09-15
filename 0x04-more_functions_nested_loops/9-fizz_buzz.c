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

	for (num = 1; num < 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);

	}
	printf("Buzz\n");
	return (0);
}
