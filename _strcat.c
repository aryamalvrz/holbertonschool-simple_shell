#include "main.h"

/**
 * _strcat - This function appends the src to the dest string,
 * overwriting the termination null byte at the end of dest,
 * then adds a termination NULL byte.
 *
 * @dest: Original
 * @src: To be added to dest
 *
 * Return: A pointer to the resulting string of dest.
 */

char *_strcat(char *dest, char *src)
{
	int move, original;

	original = 0;
	move = 0;

	while (dest[original] != '\0')
		original++;

	while (src[move] != '\0')
	{
		dest[original] = src[move];
		original++;
		move++;
	}

	dest[original] = '\0';

	return (dest);

}
