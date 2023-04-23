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
	int c;
	char *s;

	if (format == NULL)
		return (-1);

	if (format[i] == '\0')
		return (0);

	va_start(args, format);

	for(; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i + 1] == 'c')
		{
			c = va_arg(args, int);
			if (c == EOF)
				return (-1);
			_putchar(c);
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s = va_arg(args, char *);
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
			_putchar(format[i]);
			i++;
		}

		r_count += 1;
	}
	va_end(args);
	return (r_count);
}
