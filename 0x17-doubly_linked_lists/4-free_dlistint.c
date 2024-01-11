#include "lists.h"

/**
 * Frees all nodes of a dlistint_t list, starting from the head.
 *
 * @param head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head) {
    if (head == NULL) {
     
        return;
    }

      

    while (head != NULL) {
        dlistint_t *next = head->next;  
        free(head);  
        head = next;  
    }
}
