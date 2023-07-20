#include "main.h"
/**
 * print_square - as
 * @size: ada
 */
void print_square(int size)
{
	int k, j;

	if (size > 0)
	{
		k = 0;
		while (k < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			k++;
		}
	}
	else
		_putchar('\n');
}
