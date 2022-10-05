#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer of character
 * Return: void
*/

void rev_string(char *s)
{
	int i;
	int len = 0;
	len = _strlen(s);

	for (i = len ; i >= 0 ; i --)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
