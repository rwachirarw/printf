#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
  * struct format - to match the conversion specifiers
  * @id: specifier to be converted
  * @f: function for the specifier
  */

typedef struct format
{
	char *id;
	int (*f)();
} match_convert;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_str(va_list args);
int _print_cent(void);
int _print_chr(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int _print_dec(va_list args);
int _print_int(va_list args);
int _print_binary(va_list args);


#endif
