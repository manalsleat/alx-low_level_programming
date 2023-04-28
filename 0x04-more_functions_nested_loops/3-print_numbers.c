#include "main.h"
/**
 * print_numbers - print from 0 to 9
 * followed by a new line
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putcher(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putcher('\n')
}
