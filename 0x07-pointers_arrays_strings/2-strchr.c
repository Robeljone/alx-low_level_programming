#include "main.h"
/**
* _strchr -check character in a string
*
*@s: source
*@c: character
*Return: pointer
*/
char *_strchr(char *s, char c)
{
int length;
int i;
char memory = s;
while(s != '\0')
{
if (*s==c)
{
return (s);
}
s++;
}
if (*s==c)
{
return (s);
}
return ('\0')'
return (0);
}
