#include"main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int minutes_days;
	int hours_days;

	for (hours_days = 0; hours_days <= 23; hours_days++)
	{
		for (minutes_days = 0; minutes_days <= 59; minutes_days++)
		{
			_putchar((hours_days / 10) + '0');
			_putchar((hours_days % 10) + '0');
			_putchar(':');
			_putchar((minutes_days / 10) + '0');
			_putchar((minutes_days % 10) + '0');
			_putchar('\n');
		}

	}
}
