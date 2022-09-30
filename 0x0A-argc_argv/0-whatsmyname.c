#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of its executable file
 * @argc: number of input
 * @argv: array of inputted string
 * Return: 0 as success
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
