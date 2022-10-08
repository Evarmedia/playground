#include "main.h"
/**
 * print_sign - prints sign of digit
 *
 * @n: parameter to be checked
 * Return: 1 if postive, 0 if 0 and -1 if less than 0
 */
int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		res = 0;
	}
	else
	{
		_putchar('-');
		res = -1;
	}
	return (res);
}
