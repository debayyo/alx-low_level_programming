#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *
 *
 */
int main(void)
{

	srand(time(0));
	int num = rand();
	printf("%i\n",num);
	return (0);
}
