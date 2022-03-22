#include "main.h"
/**
* puts_half -change value using the pointer address
*
*@str: stores the input
*/
void puts_half(char *str)
{
int i=0;
int leng = 0;
int half;
while(str[i])
{
leng++;
}
leng = (leng - 1) / 2;
while (str[++leng])
{
putchar(str[leng]);
}
putchar('\n');
}
