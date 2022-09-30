#include <stdio.h>
#include <stdlib.h>

int change(int mn);
/**
 * change - the core change calculator
 * @mn: inputted value
 * Return: number of change
 */

int change(int mn)
{
	int num = 1;

	if (mn <= 0)
		return (0);

	if (mn >= 25)
		num += change(mn - 25);
	else if (mn >= 10)
		num += change(mn - 10);
	else if (mn >= 5)
		num += change(mn - 5);
	else if (mn >= 2)
		num += change(mn - 2);
	else if (mn >= 1)
		num += change(mn - 1);

	return (num);
}

/**
 * main - calculates number of change for inputted amount
 * @argc: number of inputted arguments
 * @argv: array of inputted arguments
 * Return: 0 for success and 1 for error
 */

int main(int argc, char **argv)
{
	int numc;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numc = change(atoi(argv[1]));
	printf("%d\n", numc);
	return (0);
}
