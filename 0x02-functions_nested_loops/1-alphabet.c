#include <stdio.h>
#include <main.h>
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char x='a';
while(x != 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
