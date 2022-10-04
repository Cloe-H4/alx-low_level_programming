#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates strings with each in a new line
 * @ac: number of strings inputted
 * @av: array of strings inputted
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *lines;
	int j, i = 0, len = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
		i++;
	}

	lines = malloc(sizeof(char) * len);
	if (lines == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			lines[count++] = av[i][j];
		lines[count++] = '\n';
		i++;
	}
	return (lines);
}
