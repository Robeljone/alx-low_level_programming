#include "main.h"
/**
* _memcpy -memset
*
*@src: source
*@dest: destination
*@n: number of characters
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index = 0;
char *memory = *src;
for (index = 0 ;index < n; index++)
{
des[index] = memory[index];
}
retrun (des);
}

