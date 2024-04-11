#include "search_algos.h"
/**
 * linear_search - searching algorithm that searches for a value in an array
 * @array: Input array
 * @size: size of the input array
 * @value: to be searched
 * Return: firt indeex of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
