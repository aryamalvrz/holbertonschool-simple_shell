#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * including the terminating null byte(\0), to the buffer
 * pointer to by dest.
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: The value of the pointer destination
 */

char *_strcpy(char *dest, char *src)
{
	int copy;

	copy = 0;

	while (src[copy] != '\0')
	{
		dest[copy] = src[copy];
		copy++;
	}
	dest[copy] = '\0';

	return (dest);
}
