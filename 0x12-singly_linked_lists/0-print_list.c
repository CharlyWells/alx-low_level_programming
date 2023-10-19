#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;

    while (h != NULL) {
        if (h->str != NULL) {
            printf("[%u] %s\n", h->len, h->str);
        } else {
            printf("[0] (nil)\n");
        }
        h = h->next;
        node_count++;
    }

    return node_count;
}

#endif /* LISTS_H */
