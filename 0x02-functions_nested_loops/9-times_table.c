#include "main.h"
/**
* jack_bauer - does my stuff
* @void: its mine damnit
*
* Return: Does my stuff explained.
*/
void times_table(void)
{
int x;
int y;
int z;
int j;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z == 0)
{
_putchar('0' + z);
}
else if(z >= 10)
{
_putchar(' ');
_putchar('0' + (z / 10));
_putchar('0' + (z % 10));
}
else
{
_putchar(' ');
_putchar(' ');
_putchar('0' + z);
}
if (j != 9)
{
_putchar (',');
}
}
_putchar('\n');
}
}
