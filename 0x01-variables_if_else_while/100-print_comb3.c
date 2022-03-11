#include <stdio.h>
/**
* main - Entry point
 *
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 0 ; x <= 8; x++)
{
for(int j=1;j<8;j++){
if(x!=j){
putchar(x);
putchar(',');
putchar(j);
}
}
}
return (0);
}
