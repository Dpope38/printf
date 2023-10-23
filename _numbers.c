#include "main.h"
#include <stdio.h>
/**
*_interger - prints integers to stdout
*@number: number to be printed.
*@count_numbers: pointer to character count
*Return: void
*/
void _interger(int number, int *count_numbers)
{
	char neg_sign, decimal_char;

	if (number < 0 && *count_numbers == 0)
	{
		neg_sign = '-';
		write(1, &neg_sign, 1);
		(*count_numbers)++;
	}
	if (number <= -10 || number >= 10)
	{
		_interger(number / 10, count_numbers);
	}
	if (number < 0)
	{
		decimal_char = '0' - (number % 10);
	}
	else
	{
		decimal_char = number % 10 + '0';
	}
	write(1, &decimal_char, 1);
	(*count_numbers)++;
}
