#include "main.h"
/**
 * _print_oct - function that prints numbers in octal
 *
 * @args: function parameters
 * Return: 0
 */
int _print_oct(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;
	char c;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = (int *)malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		/* Convert the integer digit to a character and write to stdout */
		c = array[i] + '0';
		write(1, &c, 1);
	}
	free(array);
	return (counter);
}
