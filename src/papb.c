/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** papb.c
*/

#include "../includes/my.h"
#include <stdlib.h>


pile *pb(pile *l_b, pile *l_a)
{
    element *n_node = malloc(sizeof(element));
    if (n_node == 0)
        return NULL;
    n_node->number = l_a->top->number;
    n_node->prev = NULL;
    n_node->next = NULL;
    if (l_b == 0) {
        l_b = malloc(sizeof(pile));
        if (l_b == 0)
            return NULL;
        l_b->top = n_node;
        l_b->bottom = n_node; }
    else {
        l_b->top->prev = n_node;
        n_node->next = l_b->top;
        l_b->top = n_node;
    }
    l_a = pop_in(l_a);
    wrt_pb(&l_a);
    return l_b;
}

void wrt_pb(pile **l_a)
{
    if ((*l_a)->o == 0)
        write(1, "pb", 2);
    else
        write(1, " pb", 3);
    (*l_a)->o = 1;
}

void wrt_pa(pile **l_a)
{
    if ((*l_a)->o == 0)
        write(1, "pa", 2);
    else
        write(1, " pa", 3);
}

pile *pa(pile *l_a, pile *l_b)
{
    element *n_node = malloc(sizeof(element));
    if (n_node == 0)
        return NULL;
    n_node->number = l_b->top->number;
    n_node->prev = NULL;
    n_node->next = NULL;
    if (l_a == 0) {
        l_a = malloc(sizeof(pile));
        if (l_a == 0)
            return NULL;
        l_a->top = n_node;
        l_a->bottom = n_node; }
    else {
        l_a->top->prev = n_node;
        n_node->next = l_a->top;
        l_a->top = n_node;
    }
    l_b = pop_in(l_b);
    wrt_pa(&l_a);
    return l_a;
}
