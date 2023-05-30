#include "main.h"
/**
 * Returns: 1 if c is lowercase, 0 otherwise
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
