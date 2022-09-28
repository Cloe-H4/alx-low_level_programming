#include "main.h"
#include <string.h>

int check(char *s, int ck);
int is_palindrome(char *s);

/**
 * check - checks if string is a palindrome
 * @s: string to be checked
 * @ck: a number for checking
 *
 * Return:1 if it is
 *	  0 if not
 */

int check(char *s, int ck)
{
	if (ck == strlen(s) / 2)
		return (1);
	else if (s[ck] != s[strlen(s) - ck - 1])
		return (0);
	return (check(s, ck + 1));
}

/**
 * is_palindrome - leads into the function that checks for palindromes
 * @s: string inputted
 *
 * Return: 1 if it is
 *	   0 if not
 */

int is_palindrome(char *s)
{
	int ck = 0;

	if (strlen(s) == 0 || strlen(s) == 1)
		return (1);
	return (check(s, ck));
}
