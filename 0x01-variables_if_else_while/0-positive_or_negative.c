#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n > 0)
          {
        printf("%d is a Postive number \n", n);
          }
        else if(n == 0)
         {
         printf("the number is zero");
         }
        else
         {
        printf("%d is a Negative number \n", n);
         }
	/* your code goes there */
	return (0);
}
