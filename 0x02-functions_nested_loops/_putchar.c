#include"main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to standard out put
 * @c: the character to print
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
