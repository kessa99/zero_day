#include "main.h"
#include <string.h>
/**
 * print_rev - print the reserve followed by a new line
 * @s: pointer character
 * Return;void
*/
void print_rev(char *s)
{
	int i;
	int len = 0;

	len = strlen(s);
	for (i = len ; i > 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
