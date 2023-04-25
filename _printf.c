#include "main.h"

/**
 * _printf - a function that prints in any format
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char * const format, ...)
{
	match_convert m[] = {
		{"%s", _print_str}, {"%c", _print_chr},
		{"%%", _print_cent},
		{"%i", _print_int}, {"%d", _print_dec},
		{"%b", _print_binary}, {"%u", _print_unsigned},
		{"%o", _print_oct}, {"%x", _print_hex},
		{"%X", _print_HEX}, {"%S",_print_excl_str}
	};

	va_list args;
	int i = 0, j, len = 0, match_found = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while ((format[i]) != '\0')
	{
		match_found = 0;

		for (j = 0; j < 11; j++)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i += 2;
				match_found = 1;
				break;
			}
		}
		if (!match_found)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}

