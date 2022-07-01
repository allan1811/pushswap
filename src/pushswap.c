/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** pushswap.c
*/

#include <stdlib.h>
#include "../includes/my.h"

void empile(pile *la, int nb)
{
    element *new = malloc(sizeof(element));
    new->number = nb;
    new->next = la->top;
    la->top = new;
}

int findmini(pile *l_a, int list_length)
{
    int nbr = l_a->top->number;
    int i = 1;
    int rank = 0;
    element *temp = l_a->top;
    for (temp; temp != NULL;) {
        if (nbr > temp->number) {
            nbr = temp->number;
            rank = i;
        }
        temp = temp->next;
        i++;
    }
    return (rank);
}

int depile(pile *la)
{
    int dep = 0;
    element *depi = la->top;
    if (la != NULL) {
        dep = depi->number;
        la->top = depi->next;
        free(depi);
    }
    return (dep);
}

void findtop(int save_pos, int *list_length, pile **l_a, pile **l_b)
{
    int temp = save_pos;
    if (save_pos > (*list_length / 2)) {
        while (temp < *list_length + 1) {
            rra(*l_a);
            temp++;
        }
        *l_b = pb(*l_b, *l_a);
        (*list_length)--;
    }
}

void findbottom(int save_pos, int *list_length, pile **l_a, pile **l_b)
{
    int temp = save_pos;
    if (save_pos <= (*list_length / 2)) {
        while (temp > 1) {
            ra(*l_a);
            temp--;
        }
        *l_b = pb(*l_b, *l_a);
        (*list_length)--;
    }
}


