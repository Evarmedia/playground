#include <stdio.h>
#include <time.h>
#include "main.h"

/**
  * main- entry point og the program
  * takes no argument
  *
  * @n: interger parameter
  * Description: determing if int is positve or negative usinf ifelse
  * Return: Program always return 0(success)
  */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{

		printf("%d is negative\n", n);
	}
}
