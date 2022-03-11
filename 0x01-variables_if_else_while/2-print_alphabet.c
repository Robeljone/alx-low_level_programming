#include <stdio.h>
/**
* main - random numbers
* Return: last digit
*/
int main(void)
{
int lowercase,x;
for (x = 'A'; x <= 'Z'; x++)
  {
    lowercase = tolower(x);
    putchar(lowercase);
  }
return (0);
}
