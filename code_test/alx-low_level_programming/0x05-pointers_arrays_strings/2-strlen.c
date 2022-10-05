#include "main.h"
/**
 * _strlen - length of the string
 * @s: a pointer character
 * Return: int
 */
/*int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}*/

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		len++;
	}
	return (len);
}
