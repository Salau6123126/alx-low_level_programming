#include "main.h"
/**
* 8-24_hours - prints a 24 hour timer
* Description: prints every minute
*/
void 8-24_hours(void)
{
	int time;
	int x;

	time = 0;

	while (time < 24)
	{
		for (x = 0; x < 60; x++)
		{
			_putchar(time / 10 + 48);
			_putchar(time % 10 + 48);
			_putchar(':');
			_putchar(x / 10 + 48);
			_putchar(x % 10 + 48);
			_putchar('\n');
		}
		time++;
	}
}
