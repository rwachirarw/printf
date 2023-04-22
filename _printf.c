#include "main.h"

/**
 * _printf - a function that prints in any format
 * @format: character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, r_count = 0, r_scount = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}

		else if (format[i + 1] == 's')
		{
			r_scount = _puts(va_arg(args, char *));
			i++;
			r_count += (r_scount - 1);
		}

		else if (format[i + 1] == '%')
		{
			i++;
			_putchar('%');
		}
		r_count += 1;
	}
	return (r_count);
}
