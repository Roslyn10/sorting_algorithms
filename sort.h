#ifndef SORT_HEADER_H
#define SORT_HEADER_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * enum bool_values-  A function that enumerates Boolean values.
 * Description - Emuneration of Boolean values
 * @false: Equals 0.
 * @true: Equals 1.
 */

typedef enum bool_values
{
	false = 0,
	true
} bool_values;

/**Given code and prototypes**/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void lomuto_sort(int *array, size_t size, int left, int right);
int lomuto(int *array, size_t size, int left, int right);

void quick_sort(int *array, size_t size);
void swap(int *b, int *s);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

#endif /**SORT_HEADER_H**/
