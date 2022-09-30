#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *s;
	s[2];

	while (i < argc)
	{
		if (argv[i] == "0")
		{
			printf("%s\n", argv[i]);
		}
		else
			printf("Not it\n");
		i++;
	}
	return (0);
}
