#include "main.h"
/**
 * _print_ptr - function that prints memory address in
 * hexadecimal
 *
 * @args: function parameter
 * Return: 0
 */
int _print_ptr(va_list args)
{
	void *p = va_arg(args, void*);
	char hex[20];
	int i, digit;
	unsigned long int a;

	if (p == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	else
	{
		a = (unsigned long int)p;
		i = 0;
		write(1, "0x", 2);
		while (a > 0)
		{
			digit = a % 16;
			if (digit < 10)
			{
				hex[i++] = digit + '0';
			}
			else
			{
				hex[i++] = digit - 10 + 'a';
			}
			a /= 16;
		}
		if (i == 0)
		{
			hex[i++] = '0';
		}
		while (--i >= 0)
		{
			write(1, &hex[i], 1);
		}
		return (i + 3);
	}
}
