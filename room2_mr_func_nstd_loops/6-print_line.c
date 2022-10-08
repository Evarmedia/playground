#include "main.h"

/**
  * print_line - draws a straight line on terminal
  *
  * @n: number of times line prints
  *
  * Return: printed line
  */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar(10);
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
