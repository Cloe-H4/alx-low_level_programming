#include <stdio.h>
#include <string.h>

/**
 * main - checks how strcmp works
 * Return: 0 if successful
 */

int main(void)
{
	char fun[5] = "eace";
	char pet[5] = "eazn";
	int i;

	i = strcmp(fun, pet);
	printf("%d\n", i);
	return (0);
}
