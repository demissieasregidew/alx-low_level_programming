#include <stdlib.h>
#include <time.h>
#include <stdio.h>
./betty-style.pl main.c
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 ){
        printf("is positive");
}else if( n == 0 ){
        printf("is equal to zero");
        }else{
        printf("is negative");
}
	return 0;
}
