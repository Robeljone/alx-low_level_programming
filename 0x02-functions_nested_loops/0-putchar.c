#include <stdio.h>
int main(void)
{
int x,y;
char ch[] = "_putchar";
for (x=0; x <= 9; x++)
{
for (y=0; y<strlen(ch); y++)
{
putchar(ch[y]);
}
}
return (0);
}
