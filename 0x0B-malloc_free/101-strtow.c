#include "main.h"
#include <stdlib.h>

/**
 * strtow - cuts string into words
 * @str: inputted string
 * Return: pointer to words
 */

char **strtow(char *str)
{
	char **words;
	int i, j, num = 0, count = 0, wd_num = 0, let_num = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			wd_num++;
	}
	words = malloc(sizeof(void *) * (wd_num + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			j = i + 1;
			while (str[j] != ' ' && str[j] != '\0')
			{
				let_num++;
				j++;
			}
			words[num] = malloc(sizeof(char) * let_num + 1);
			if (words[num] == NULL)
			{
				for (; num <= 0; num--)
					free(words[num]);
				free(words);
				return (NULL);
			}
			j = i + 1;
			count = 0;
			while (str[j] != ' ' && str[j] != '\0')
				words[num][count++] = str[j++];
			num++;
		}
	}
	words[num] = NULL;
	return (words);
}
