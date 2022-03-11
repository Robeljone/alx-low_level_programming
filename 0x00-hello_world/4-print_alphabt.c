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
    if (lowercase != 'e' && lowercase != 'q')
    {
        putchar(lowercase);
    }
    else
    {
        
    }
  }
return (0);
}
