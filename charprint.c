#include "main.h"
/**
 * _putchar - print a character tp stdout
 * @c: character to print
 * Return: 1 on success
 * - 1 o errorn
 */
int _putchar(char c)
{
	return (write(1, &c, BUFFER));
}
