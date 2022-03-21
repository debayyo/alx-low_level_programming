#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 *
 */
int main(void)
{

	srand(time(0));
	int num = rand(0);
	printf("%i\n",num);
	return (0);
}
