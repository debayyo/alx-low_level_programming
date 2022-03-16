#include "main.h"

/**
 * print_alphabet_x10- print 10x the alphabet
 *
 * Return: 0 when succesful
 */
void print_alphabet_x10(void);
{
	int alphabet;
	int count;


	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}

		count++;
		putchar('\n');
	}


}
