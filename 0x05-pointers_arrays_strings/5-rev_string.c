#include "main.h"
/**
* rev_string -change value using the pointer address
*
*@s: stores the input
*/
void rev_string(char *s)
{
int i = 0;
int last_pos;
int length = 0;
char *temp = s;
while(*temp != '\0')
{
temp++;
length++;
}
last_pos= length - 1;
while(i < length)
{
char temp = s[i];
s[i] = s[last_pos];
s[last_pos] =  temp;
i++;
lastpos--;
}
}
