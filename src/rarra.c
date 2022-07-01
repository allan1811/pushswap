/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** rarra.c
*/

#include "../includes/my.h"
#include <stdlib.h>

void ra(pile *l_a)
{
    l_a->top = l_a->top->next;
    l_a->bottom->next = l_a->top->prev;
    l_a->bottom->next->prev = l_a->bottom;
    l_a->bottom = l_a->bottom->next;
    l_a->top->prev = NULL;
    l_a->bottom->next = NULL;
    if (l_a->o == 0)
        write(1, "ra", 2);
    else
        write(1, " ra", 3);
    l_a->o = 1;
}

void rra(pile *l_a)
{
    l_a->bottom = l_a->bottom->prev;
    l_a->top->prev = l_a->bottom->next;
    l_a->top->prev->next = l_a->top;
    l_a->top = l_a->top->prev;
    l_a->top->prev = NULL;
    l_a->bottom->next = NULL;
    if (l_a->o == 0)
        write(1, "rra", 3);
    else
        write(1, " rra", 4);
    l_a->o = 1;
}