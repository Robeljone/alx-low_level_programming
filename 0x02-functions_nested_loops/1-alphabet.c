#include <stdio.h>
/**
* print_alphabet - does my stuff
* user input
*
* alphabet
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n'); 
}

int main(void)
{
print_alphabet();
return (0);
}
