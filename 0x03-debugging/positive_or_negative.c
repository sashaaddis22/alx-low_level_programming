#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - reads and input and prints
* if input either positive or negative or 0
* @i: input
* Return: nothing
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);

}
