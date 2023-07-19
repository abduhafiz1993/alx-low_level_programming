#include "main.h"
/**
 * main - Prints _putchar followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar\n";
	int char_counter = 0;

	while (char_counter < 9)
	{
		_putchar(word[char_counter]);
		char_counter++;
	}
	return (0);
}
