#include "main.h"
/**
 * print_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
