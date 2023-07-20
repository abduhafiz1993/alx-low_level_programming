#include "main.h"
/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char numbers = '0';

	while (numbers <= '9')
	{
		if (numbers != '2' && numbers != '4')
		{
			_putchar(numbers);
		}
		numbers++;
	}
	_putchar('\n');
}
