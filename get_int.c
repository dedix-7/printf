#include "main.h"

/**
 * get_int - prints integers
 * @number: integer to be printed
 */
void get_int(int number)
{
	int i;

	if (number == 0)
		return;
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	i = number / 10;
	get_int(i);
	_putchar((number % 10) + '0');
}
