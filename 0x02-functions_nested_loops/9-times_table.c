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
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
_putchar(z);
_putchar(',');
_putchar(' ');
}
_putchar ('\n');
}
}
