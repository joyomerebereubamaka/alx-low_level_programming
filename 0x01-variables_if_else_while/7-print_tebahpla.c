#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
