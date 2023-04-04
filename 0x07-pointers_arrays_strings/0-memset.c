#include "main.h"
/**
 * _memset - fill a memory with a specific value
 * @s: the start of the addres of the memory to be filled
 * @b: the value desired
 * @n: number of bytes to be transformed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
