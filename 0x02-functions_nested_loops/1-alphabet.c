#include <stdio.h>
/**
* print_alphabet - does my stuff
* user input
*
* alphabet
*/
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet()
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
