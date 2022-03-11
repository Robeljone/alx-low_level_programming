#include <stdio.h>
/**
* main - random numbers
* Return: last digit
*/
int main(void)
{
int lowercase;
for (int x = 'A'; x <= 'Z'; x++)
  {
    lowercase = tolower(x);
    putchar(lowercase);
  }
return (0);
}
