/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** main.c
*/

#include "../includes/my.h"
#include <stdlib.h>

void display_pile(pile *pile)
{
    element *number = pile->top;
    while (number != NULL) {
        my_put_nbr(number->number);
        number = number->next;
    }
    my_putchar("\n");
}

pile *node(int x, pile *l_a)
{
    element *n_node = malloc(sizeof(element) + 1);
    if (n_node == 0)
        return NULL;
    n_node->number = x;
    n_node->prev = NULL;
    n_node->next = NULL;
    if (l_a == 0) {
        l_a = malloc(sizeof(pile) + 1);
        if (l_a == 0)
            return NULL;
        l_a->top = n_node;
        l_a->bottom = n_node;
        l_a->o = 0;
    }
    else {
        l_a->bottom->next = n_node;
        n_node->prev = l_a->bottom;
        l_a->bottom = n_node;
    }
    return l_a;
}

int main(int ac, char **av)
{

    int i = 1;
    int list_length = 0;
    pile *l_a = NULL;
    pile *l_b = NULL;
    if (ac < 2)
        return (84);
    for (i; i < ac; i++) {
        l_a = node(my_getnbr(av[i]), l_a);
        list_length++;
    }
    int pass = checkorder(l_a);
    if (pass == 1) {
        write(1, "\n", 1);
        return (0);
    }
    selectalgo(l_a, l_b, list_length);
    write(1, "\n", 1);
    return (0);
}