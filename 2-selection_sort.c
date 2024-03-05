#include "sort.h"

/**
 * swap- A function that swaps two integers in an array.
 * A function that swaps two integers
 * @b: The first integer to swap.
 * @s: The second integer to swap.
 * Return: Nothing
 */

void swap(int *b, int *s)
{
        int temp;

        temp = *b;
        *b = *s;
        *s = temp;
}

/**
 * selection_sort - A function that sorts an array of integers
 * in ascending order using the selection sort algorithm
 * Description - Sorts an array of integers using selection sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int *pi;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		pi = array + i;
		for (j = i + 1; j < size; j++)
			pi = (array[j] < *pi) ? (array + j) : pi;

		if ((array + i) != pi)
		{
			swap(array + i, pi);
			print_array(array, size);
		}
	}
}
