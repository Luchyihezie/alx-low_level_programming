#include <stdio.h>
/**
 * main- prints all single digits in base ten
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
