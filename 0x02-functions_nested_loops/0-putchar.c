#include <stdio.h>
/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
char ch[] = "_putchar";
for (x = 0; x < 8; x++)
{
putchar(ch[x]);
}
putchar('\n');
return (0);
}
