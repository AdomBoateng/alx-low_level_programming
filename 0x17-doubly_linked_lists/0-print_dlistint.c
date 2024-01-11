#include "lists.h"

/**
 * Prints all elements of a dlistint_t list, starting from the head.
 *
 * @param h: The head of the list
 * @return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *h) {
    size_t count = 0; 

    while (h != NULL) {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return count;
}
