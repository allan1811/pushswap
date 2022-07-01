/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** sasb.c
*/

#include "../includes/my.h"

void sa(pile *la)
{
    int i = la->top->number;
    la->top->number = la->top->next->number;
    la->top->next->number = i;
    my_putstr("\nsa\n");
}

void sb(pile *lb)
{
    int i = lb->top->number;
    lb->top->number = lb->top->next->number;
    lb->top->next->number = i;
    my_putstr("\nsb\n");
}