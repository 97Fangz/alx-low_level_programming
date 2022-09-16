#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
int hr, min;

for (hr = 0; hr < 24; hr++)
{
for (min = 0; min < 60; min++)
{
if (hr < 10)
{
_putchar('0' + hr);
}
else
{
_putchar(hr);
}
if (min < 60)
{
_putchar('0' + min);
}
else
{
_putchar(min);
}
}
}
}
