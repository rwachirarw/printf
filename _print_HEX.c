#include "main.h"
/**
 * _print_HEX - Function that prints Hexadecimal numbers in
 * upper case
 *
 * @args: function parameters
 * Return: 0
 */
int _print_HEX(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;
	char hex_digit;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = (int *)malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		hex_digit = (char)(array[i] + '0');
		_putchar(hex_digit);
	}
	free(array);
	return (counter);
}
