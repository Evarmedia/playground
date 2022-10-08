#include "main.h"

/**
  * _isdigit - A function that checks for a digit
  *
  * @c: parameter to be checked
  *
  * Return: 1 if digit and 0 if not
  */
int _isdigit(int c)
{
	int tmp;

	if ((c >= 48) && (c <= 57))
	{
		tmp = 1;
	}
	else
	{
		tmp = 0;
	}
	return (tmp);
}
