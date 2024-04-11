#include "search_algos.h"
 /**
  * binary_search - Uses binary search to search a sorted array
  * @array: Input array
  * @size: Size of array
  * @value: Value to be found
  * Return: index of value or -1 on failure
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low, mid, high;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
