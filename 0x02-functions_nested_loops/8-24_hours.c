#include "main.h"
#include <stdio.h>

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
printf("0%d", hr);
}
else
{
printf("%d", hr);
}
if (min < 60)
{
printf("0%d", min);
}
else
{
printf("%d", min);
}
}
}
}
