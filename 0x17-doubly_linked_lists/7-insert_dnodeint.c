#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (!new) {
        return NULL; 
    }

    new->n = n;

    
    if (idx == 0 || *h == NULL) {
        new->next = *h;
        new->prev = NULL;
        if (*h) {
            (*h)->prev = new;
        }
        *h = new;
        return new;
    }

    
    for (unsigned int i = 1; i < idx && (*h); i++) {
        (*h) = (*h)->next;
    }

    if (!*h) {
        return NULL; 
    }

    
    new->next = (*h)->next;
    new->prev = (*h);
    if ((*h)->next) {
        (*h)->next->prev = new;
    }
    (*h)->next = new;

    return new;
}
