#include <stdio.h>
#include <string.h>

/**
 * main - checks how strcmp works
 * Return: 0 if successful
 */

int main(void)
{
	char fun[5] = "main ";
	char pet[5] = "main.";
	int i;

	i = strcmp(fun, pet);
	printf("%d\n", i);
	return (0);
}
