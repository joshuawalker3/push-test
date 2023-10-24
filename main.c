#include "avg.h"
#include <stdio.h>

int main()
{
	int numbers[99];

	int size = build(numbers);

	double average = avg(numbers, size);

	printf("The average is: %f\n", average);

	return 0;
}

