#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	char *items[];

	va_start(args, format);
		
	for (i = 0; i < format; i++)
	{
		items = va_arg(format, char *);

	}
	va_end(args);
	return items;
}
