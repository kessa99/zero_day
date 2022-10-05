#include "main.h"
#include <string.h>
/**
 * puts_half - printhalf of a string
 * @str: pointer of string
 * Return: void
*/
void puts_half(char *str)
{
	int i;
	int n;

	n = (strlen(str));
	if (n / 2 != 0)
	{
		n = ((strlen(str) - 1) / 2);
		for (i = n ; i != '\0' ; i ++)
		{
		_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0 ; i < n ; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
	
}
