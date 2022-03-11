#include <stdio.h>
/**
* main - Entry point
 *
* Return: Always 0 (Success)
*/
int main(void)
{
int x, j;
for (x = 0; x <= 8; x++)
{
for (j=1; j<8; j++)
{
if (x != j)
{
putchar(x);
putchar(',');
putchar(j);
}
}
}
return (0);
}
