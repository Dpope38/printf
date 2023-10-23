#include "main.h"

/**
 * _character - write the character a to stdout
 * @a: the character to print
 *@char_count: pointer to the character count
 * Return: void
 */
void _character(char a, int *char_count)
{
	(write(1, &a, 1));
	(*char_count)++;
}

/**
 * _string - prints a string
 * @b: the string to be printed
 *@char_count: pointer to the character count.
 * Return: nothing
 */
void _string(const char *b, int *char_count)
{
	int string_length;

	if (b == NULL)
	{
		b = "(null)";
	}
	string_length = strlen(b);
	write(1, b, string_length);
	(*char_count) += string_length;
}
