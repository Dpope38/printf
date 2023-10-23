#include "main.h"
/**
*format_convert - checks the specified format and print
*@format: the character string to be printed
*@list_of_args: argument list
*@count_char: counts total characters printed
*/
void format_convert(const char *format, va_list list_of_args, int *count_char)
{
	char character, *string;
	int a;

	format++;
	if (*format == 'c')
	{
		character = (char)va_arg(list_of_args, int);
		_character(character, count_char);
	}
	else if (*format == 's')
	{
		string = va_arg(list_of_args, char*);
		_string(string, count_char);
	}
	else if (*format == '%')
	{
		_character('%', count_char);
	}
	else if (*format == 'd' || *format == 'i')
	{
		a = va_arg(list_of_args, int);
		_interger(a, count_char);

	}
	else
	{
		_character('%', count_char);
		if (*format != '\0')
		{
			_character(*format, count_char);
		}
	}


}
