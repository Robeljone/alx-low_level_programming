#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)

{
int r;
int m;
m = print_last_digit(98);
_putchar(m);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
