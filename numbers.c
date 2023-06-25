#include "main.h"

/**
 *
 * printint - prints integers
 * @r: va_list integer to be printed
 * Return: number of digits printed
 */
int printint(int r)
{
	int remainder, quotient, number = 0;

	remainder = r % 10;
	quotient = r / 10;
	if (r == 0)	{
		_putchar(48);
		_putchar(48);
		return (2);
	}
	if (quotient == 0)
	{
		_putchar(remainder + 48);
		return (1);
	}
	if (remainder < quotient)
	{
		number = number + (printint(quotient));
		_putchar(remainder + 48);
	}
	return (number);
}
/**
 * main - check if integrs are printed and digits counted
 * Return: 0 on success
 * no arguments
 */
int main(void)
{
	int c = 100000;
	int number;

	//	printint(c);
	number = printint(c);
	printf("\nThe number of digits is : %d\n", number);
	printf("%d", c);
	return (0);
}
