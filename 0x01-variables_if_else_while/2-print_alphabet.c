#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
		putchar(alphabet++);
	return (0);
}
