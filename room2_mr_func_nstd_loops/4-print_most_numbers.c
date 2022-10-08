#include "main.h"

/**
  * print_most_numbers - function that prints num 0-9 without 2 and 4
  *
  * Return: void
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar((i) + '0');
	}
	_putchar(10);
}