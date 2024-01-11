#include "lists.h"

/**
 * Adds a new node at the beginning of a dlistint_t list.
 *
 * @param head: Double pointer to the head of the list (to modify the head)
 * @param n: The value to store in the new node
 * @return: The pointer to the newly added node, or NULL if allocation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    dlistint_t *new = malloc(sizeof(dlistint_t)); 
    if (new == NULL) {
        return NULL;
    }

  
    new->n = n;
    new->prev = NULL; 
    new->next = *head;  

  
    if (*head != NULL) {
        (*head)->prev = new;  
    }


    *head = new;

    return new;  
}
