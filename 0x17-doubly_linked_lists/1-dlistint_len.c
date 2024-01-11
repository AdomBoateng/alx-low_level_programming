#include "lists.h"

/**
 * Counts the number of elements in a dlistint_t list.
 *
 * @param h: The head of the list
 * @return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h) {
    size_t count = 0; 

    while (h != NULL) {
        count++;
        h = h->next;
    }

    return count;
}
