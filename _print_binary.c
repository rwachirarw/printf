#include "main.h"
/**
 * _printf_binary - prints numbers in binary
 * @args: function parametere
 * Return: 1
 */
int _printf_binary(va_list args)
{
	int flag = 0;
	int cont = 0;
	int i;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 31 ; i >= 0 ; i++)
	{
		p = (num >> i) & 1;
		if (p || flag)
		{
			flag = 1;
			_putchar(p = '0');
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return cont;
}
