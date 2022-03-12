#include <stdio.h>
/**
*main - Entry point, print 00 to 99 using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
int y;
int z;
int w;
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (z = '0'; z <= '9'; z++)
{
for (w = '0'; w <= '9'; w++)
{
if (x < y && z < w)
{
putchar(x);
putchar(x);
putchar(' ');
putchar(z);
putchar(w);
if (!(x == '8' && y == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
