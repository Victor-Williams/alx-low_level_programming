#include <stdio.h>

/**
 * main - prints alphabet in lower case,
 * then in uppercase
 * followed by a new line
 */

int main(void)
{
	char letter;

	for (letter = a; letter <= z; letter++)
		putchar(letter);

	for (letter = A; letter <= Z; letter++)
		putchar (letter);

	putchar ('/n');

	return (0);
}
