#include "main.h"
/**
 * jack_bauer - is a function to print every minute of a day.
 * Return: void
 */
void jack_bauer(void)
{
	int x, y, z, h;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
			{
				for (z = 0; z <= 5; z++)
				{
					for (h = 0; h <= 9; h++)
					{
						_putchar(x + '0');
						_putchar(y + '0');
						_putchar(58);
						_putchar(z + '0');
						_putchar(h + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
