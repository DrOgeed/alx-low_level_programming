#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: memory where it is stored
 * @src: memory location to be copied
 * @n: number of bytes
 * 
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
