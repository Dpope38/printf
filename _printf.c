#include "main.h"
/**
*_printf - clone of stdio printf.
*@format: character string to be printed
*Return: input or (null ) or -1
*/

int _printf(const char *format, ...)
{
	int input = 0;
	va_list list_of_args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == 32)
		return (-1);
	va_start(list_of_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			_character(*format, &input);
		}
		else
		{
			format_convert(format, list_of_args, &input);
			format++;
		}
		format++;

	}
	va_end(list_of_args);
	return (input);

}
