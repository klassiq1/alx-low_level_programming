#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *n from 00:00 to 23:59. min loop counts mins, while hour loop counts hours
 * and reset mins
 * Return - 0
 */

void  jack_bauer(void)
{
	int hour = 0;
	int minutes = 0;
	int hour_remainder;
	int minute_remainder;

	while (hour < 23)
	{
		while (minutes < 59)
		{
			minute_remainder = minutes % 10;
			hour_remainderr = hour % 10;
			_putchar(hour / 10 + '0');
			_putchar(hour_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
