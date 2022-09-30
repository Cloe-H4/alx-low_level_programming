#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers with certain exceptions
 * @argc: total arguments inputted
 * @argv: array of arguments inputted
 * Return: 0 if successeful and 1 if not
 */

int main(int argc, char **argv)
{
	int j, i = 1;
	int sum = 0;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		s = argv[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (isdigit(*(s + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		i++;
		sum += atoi(s);
	}
	printf("%d\n", sum);
	return (0);
}

