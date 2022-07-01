/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** poppile.c
*/

#include "../includes/my.h"
#include <stdlib.h>

pile *pop_in(pile *l_a)
{
    if (l_a->top == l_a->bottom){
        free(l_a);
        return NULL;
    }

    element *lc = l_a->top;
    l_a->top = l_a->top->next;
    l_a->top->prev = NULL;
    lc->next = NULL;
    lc->prev = NULL;

    free(lc);
    lc = NULL;
    return (l_a);
}