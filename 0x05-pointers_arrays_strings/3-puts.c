#include "main.h"
#include <stdio.h>
/**
* _puts -change value using the pointer address
*
*@str: stores the input
*/
void _puts(char *str)
{
char temp;
int length = 0;
while (*str != '\0')
{
temp = *str;
putchar(temp);
length++;
str++;
}
putchar('\n');
}
