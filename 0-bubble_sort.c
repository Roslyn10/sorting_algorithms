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
 * bubble_sort - A function that sorts an array of integers
 * in ascending order using the bubble sort algorithm
 * Description - Sorts an array of integers using bubble sort
 * @array: The array
 * @size: The size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool_values bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		length--;
	}
}
