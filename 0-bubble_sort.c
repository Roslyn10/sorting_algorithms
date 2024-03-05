#include "sort.h"

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

	size_t b, index, tmp = 0;

	if (size < 2)
	{
		return;
	}
	for (b = 0; b < size; b++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			tmp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmp;
			print_array(array, size);
			}
		}
}
