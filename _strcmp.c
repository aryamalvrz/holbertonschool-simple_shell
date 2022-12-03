#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @comparing: Source string
 * @compare: String to be compared against source
 *
 * Return: 0 if its equal, otherwise if not equal.
 */

int _strcmp(char *comparing, char *compare)
{
	while (*comparing == *compare)
	{
		if (*comparing == '\0')
		{
			return (0);
		}
		comparing++;
		compare++;
	}
	return (*comparing - *compare);
}
