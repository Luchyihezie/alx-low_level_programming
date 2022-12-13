#include"main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to standard out put
 * @c: The character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno isset appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
