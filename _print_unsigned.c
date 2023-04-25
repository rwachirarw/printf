#include "main.h"
/**
 * _print_unsigned - prints unsigned integers
 *
 * @args: Function parameters
 * Return: 0
 */
int _print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int num = n;
	unsigned int last = n % 10;
	int digit, exp = 1;
	int i = 1;
	int not_zero = 0;

	n = n / 10;

	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}

	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		if (digit != 0)
			not_zero = 1;
		if (not_zero)
		{
			_putchar(digit + '0');
			i++;
		}
		num = num - (digit * exp);
		exp = exp / 10;
	}

	_putchar(last + '0');

	return (i);
}
