#include "main.h"

/**
 * _print_excl_str - prints the string
 * @args: arguments passed
 * Return: length
 */

int _print_excl_str(va_list args)
{
	char *s = va_arg(args, char *);
	int len = 0;
	int i;
	int cast;


	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len += _print_HEX_aux(cast);
		} else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

/**
 * _print_HEX_aux - prints a hexadecimal number
 * @num: number passed
 * Return: count
 */

int _print_HEX_aux(unsigned int num)
{
	int counter = 0;
	unsigned int temp = num;
	int *array;
	int i;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == NULL)
		return (0);

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			_putchar(array[i] + 'A' - 10);
		else
			_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
