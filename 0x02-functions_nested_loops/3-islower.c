#include "main.h"

/**
 * _islower - function that checks if char is lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 if c is lowercase and 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
