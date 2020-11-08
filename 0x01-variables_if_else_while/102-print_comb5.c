#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int unit = 0, decimal = 0;
int u = 0, d = 0;

while (d <= 9)
{
while (u <= 9)
{
while (decimal <= 9)
{
while (unit <= 9)
{
if (d < decimal || (d == decimal && u < unit))
{
putchar(d + '0');
putchar(u + '0');
putchar(' ');
putchar(decimal + '0');
putchar(unit + '0');
if (d == 9 && u == 8 && decimal == 9 && unit == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
unit++;
}
unit = 0;
decimal++;
}
decimal = 0;
u++;
}
u = 0;
d++;
}
return (0);
}
