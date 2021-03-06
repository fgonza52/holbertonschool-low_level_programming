#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of ints
 * @array: ptr to the first element of the array to search
 * @size: number of elements in @array
 * @value: value to find in @array
 * Return: first index where value is located,
 *         or -1 if value not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	static size_t l, u;

	u = u ? u : size ? size - 1 : 0;
	while (array && l <= u)
	{
		size_t i = l, m = l + (u - l) / 2;

		printf("Searching in array: ");
		while (i < u)
			printf("%d, ", array[i++]);
		printf("%d\n", array[i]);

		if (array[m] == value)
			return (m + (u = l = 0));
		else if (array[m] < value)
			return (binary_search(array, u - (l = m + 1) + 1, value));
		else if (array[m] > value)
			return (binary_search(array, (u = m - 1) - l + 1, value));
	}
	return (-1 + (u = l = 0));
}
