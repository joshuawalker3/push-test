#include <stdio.h>
#include "avg.h"

int build(int arr[])
{
	int i = 0;
	printf("Enter some integers to average. Enter a letter when complete!\n");

	while (scanf("%d", &arr[i]) != 0)
	{
		i++;
	}

	return i;
}

double avg(int arr[], int i)
{
	double sum = 0;

	for (int j = 0; j <= i; j++)
	{
		sum = sum + arr[j];
	}

	return sum / (i);
}

