#include <stdio.h>
#include "main.h"

/**
  * _puts-prints a string, followed by a new line
  * @str: pointer
  * Return: void
  */

int _puts(char *str)
{
	int i = 0, r_count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		r_count++;
		i++;
	}
	return (r_count);
}

