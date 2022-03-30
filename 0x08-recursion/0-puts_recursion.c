#include "main.h"
/**
* _puts_recursion -recurssion
*
*@s: string
*/
void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
puts_recursion(s + 1);
}
else
{
putchar('\n');
}
}
