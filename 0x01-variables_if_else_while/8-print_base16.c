#include <stdio.h>

/**
 * main - prints all number of base 16 in lower case
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char let;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);

	putchar('\n');

	return (0);
}
