#include "main.h"

/**
 * main - prints the numbers, from 0-9, followed by a new line.
 */
void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
		_putchar(i + 48);
	_putchar('\n');
}
