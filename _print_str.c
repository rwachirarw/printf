#include <stdio.h>
#include "main.h"

/**
  * _print_str - prints a string, followed by a new line
  * @args: arguments
  * Return: length of the string
  */

int _print_str(va_list args)
{
	char *str;
	int i, len;

	str = va_arg(args, char *);


	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}

	else
	{
		len = _strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);

	}
}

