#include "main.h"

/**
 * _print_str_rev - function that prints a str in reverse
 * @args:arguments
 *
 * Return: the string
 */
int _print_str_rev(va_list args)
{
	char *str;
	int i, count = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		count++;

	for (i = i - 1; i >= 0; i--)
		_putchar(str[i]);

	return (count);

}
