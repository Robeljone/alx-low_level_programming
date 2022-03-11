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
        putchar("%d is a Positive number \n", n);
          }
        else if(n==0)
         {
         putchar("the number is zero");
         }
        else
         {
        putchar("%d is a Negative number \n", n);
         }
	/* your code goes there */
	return (0);
}
