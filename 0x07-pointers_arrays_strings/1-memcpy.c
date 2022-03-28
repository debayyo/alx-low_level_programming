#include "main.h"

/**
 * _memcpy() - copies memory area
 * @n: bytes from memory area
 * @src: source memory area
 * @dest: destination memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}
