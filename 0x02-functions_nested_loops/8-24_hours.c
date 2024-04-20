#include <stdio.h>

/**
 * jack_bauer - a function that prints
 * every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int x = 0; /* hour */
int y = 0; /* minutes */

while (x < 24)
{
while (y < 60)
{
printf("%02d:%02d\n", x, y);
y++;
}
y = 0; /* Reset minutes after reaching 59 */
x++;
}
}
