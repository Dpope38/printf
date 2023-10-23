#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
int _printf(const char *format, ...);
void format_convert(const char *format, va_list list_of_args, int *count_char);
void _character(char a, int *char_count);
void _string(const char *b, int *char_count);
void _interger(int number, int *count_numbers);
#endif
