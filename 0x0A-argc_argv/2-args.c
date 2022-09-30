#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all inputted arguments
 * @argc: number of arguments inputted
 * @argv: array of arguments inputted
 * Return: 0 as sucess
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
