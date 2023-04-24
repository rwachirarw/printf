#include "main.h"

/**
 * _print_chr - prints a char.
 * @args: arguments.
 * Return: 1.
 */
int _print_chr(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}
