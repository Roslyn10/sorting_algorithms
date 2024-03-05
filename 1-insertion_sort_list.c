#include "sort.h"

/**
 * swap_node - A function that swaps two nodes in a doubly-linked list
 * Desription - Swaps two nodes in a list
 * h: A pointer to the head of the list.
 * @n1: A pointer to the first node to swap.
 * @n2: The second node to swap.
 */
void swap_node(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - A function that sorts a doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * Description - Sorts a list using insertion sort algorithm
 * @list:
 * Return: Nothing
 *//**
 * insertion_sort_list - A function that sorts a doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * Description - Sorts a list using insertion sort algorithm
 * @list: Pointer to pointer to the head of the list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *it, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (it = (*list)->next; it != NULL; it = temp)
	{
		temp = it->next;
		insert = it->prev;
		while (insert != NULL && it->n < insert->n)
		{
			swap_node(list, &insert, it);
			print_list((listint_t *)*list);
		}
	}
}
