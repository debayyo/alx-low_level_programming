#include <stdio.h>

/**
 *
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet(void);

{
	char ch;
	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

}
