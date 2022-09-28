#include "main.h"

int findsq(int n, int root);
/**
 * _sqrt_recursion - function return square root of n
 * @n: inputted number
 *
 * Return: square root
 */

int findsq(int n, int root)
{
	if (root * root == n)
		return (root);
	else if ((root * root) > n)
		return (-1);
	else
		return (findsq(n, root + 1));
}

int _sqrt_recursion(int n)
{
	int root = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (findsq(n, root));
}
