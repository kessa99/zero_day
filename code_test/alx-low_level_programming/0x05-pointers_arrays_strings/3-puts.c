#include "main.h"
/**
 * _puts - print the string and the nez line
 * @str: pointer of char
 * Return: void
 */
void _puts(char *str)
{
	int i;
	int len = _strlen(str);

	/*len = _strlen(str);*/
	for (i = 0 ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
