#include "main.h"

/**
 * _printf - a function that prints in any format
 * @format: character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, r_count = 0, r_scount = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			int c = va_arg(args, int);
			if (c == EOF)
				return (-1);
			_putchar(c);
			i++;
		}
		else if (format[i + 1] == 's')
		{
			char *s = va_arg(args, char *);
			if (s == NULL)
				return (-1);
			r_scount = _puts(s);
			i++;
			r_count += (r_scount - 1);
		}

		else if (format[i + 1] == '%')
		{
			i++;
			_putchar('%');
		}
		else
		{
			return (-1);
		}
		i++;
		r_count += 1;
	}
	va_end(args);
	return (r_count);
}
