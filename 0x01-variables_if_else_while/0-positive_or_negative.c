#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n>=0)
          {
        putchar('n');
        putchar('\n');
        putchar("is a Positive number");
          }
        else if(n==0)
         {
        putchar('n');
        putchar('\n');
        putchar("is 0");

         }
        else
         {
        putchar('n');
        putchar('\n');
        putchar("is a Negative number");
         }
	/* your code goes there */
	return (0);
}
