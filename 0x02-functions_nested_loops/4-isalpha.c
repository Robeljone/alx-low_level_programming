#include "main.h"
/**
* is lower case - does my stuff
* @c: user input
*
*return lower
**/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
