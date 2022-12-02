#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 *
 * @s: Char pointer
 *
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
		;

	return (lenght);
}
