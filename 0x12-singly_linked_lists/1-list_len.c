#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements (nodes) in the list.
 */
size_t list_len(const list_t *h)
{
    size_t node_count = 0;

    while (h != NULL) {
        h = h->next;
        node_count++;
    }

    return node_count;
}
