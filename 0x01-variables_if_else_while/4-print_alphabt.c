#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: (0)
 */
int main(void)
{
	char alpha;

	alpha =  'a';
	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
