#include <stdio.h>

/**
 * main - prints all digitsi of base ten
 * starting from zero
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
