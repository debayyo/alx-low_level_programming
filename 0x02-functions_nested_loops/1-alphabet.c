#include "stdio.h"

/** 
 * print_alphabet - prints alphabet
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	putchar('\n');
}
