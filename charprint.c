#include "main.h"
/**
 * _putchar - print a character tp stdout
 * @c: character to print
 * Return: 1 on success
 * - 1 o errorn
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printspace - prints a space
 * @space: number of spaces
 * Return: len
 */
int _putspace(int space)
{
	if (space <= 0)
		return (printint(space));
	_putchar(' ');
	return (printint(space) + 1);
}
