#include "main.h"

/**
  * _isupper - a function that checks for uppercase
  *
  *
  * Return: 1 if uppercase and 0 if not
  * @c: parameter to check
  */
int _isupper(int c)
{
	int tmp;

	if ((c >= 65) && c <= 90)
	{
		tmp = 1;
	}
	else
	{
		tmp = 0;
	}
	return (tmp);
}
