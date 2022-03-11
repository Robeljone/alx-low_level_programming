#include <stdio.h>
/**
* main - Entry point
 *
* Return: Always 0 (Success)
*/
int main(void)
{
int lowercase;
for (int x = 'A'; x <= 'Z'; x++)
  {
    lowercase = tolower(x);
    putchar(lowercase);
    putchar(x);
    putchar('\n');
  }
return (0);
}
