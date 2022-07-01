/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** checkorder.c
*/

#include "../includes/my.h"
#include <stdlib.h>

int checkorder(pile *l_a)
{
    element *lc = l_a->top;
    element *ld = l_a->top->next;

    for (ld; ld != NULL;) {
        if (lc->number > ld->number)
            return (0);
        lc = lc->next;
        ld = ld->next;
    }
    return (1);
}