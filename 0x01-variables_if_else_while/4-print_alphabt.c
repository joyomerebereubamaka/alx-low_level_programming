#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
