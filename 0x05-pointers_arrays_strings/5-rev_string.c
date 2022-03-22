#include "main.h"

void rev_string(char *s)
{
int i = 0;
int last_pos;
int length = 0;
int halfleng;
char *temp = s;
while(*temp != '\0')
{
temp++;
length++;
}
last_pos= length - 1;
halfleng = length/2;
for(i >= 0; i < halfleng; i++)
{
char temp = s[i];
s[i] = s[last_pos - 1];
s[last_pos] =  temp;
}
}
