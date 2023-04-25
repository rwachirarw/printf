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
	void *p;
	char *s = "(nil)";
	long int a;
	int i, b;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = _print_hex_excl(a);
	return (b + 2);
}

/**
 * _print_hex_excl - prints hexadecimal
 * @num: input number to print
 * Return: count
 */

int _print_hex_excl(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = (long int *) malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
