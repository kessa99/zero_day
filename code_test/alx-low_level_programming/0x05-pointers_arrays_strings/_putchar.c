#include <unistd.h>

/**
 * putchar - writes the character c
 * @c: the character
 *
 * Return: 1 sucess
 * -1 error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
