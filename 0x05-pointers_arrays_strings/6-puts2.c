#include "main.h"

/**
 * puts2 -  prints every other character of a string
 *	starting with the first character
 *	followed by a new line
 *
 * @str: string input
 *
 * Return: no retun
*/

void puts2(char *str)
{
	int i = 0;
	int t = 0;
	int o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (i % 2 == 0)
	{
			_putchar(str[o]);
	}
	}
	_putchar('\n');
}
