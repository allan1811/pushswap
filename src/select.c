/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-pushswap-allan.charlier
** File description:
** algo.c
*/

#include "../includes/my.h"


void selectalgo(pile *l_a, pile *l_b, int list_length)
{
    int condi = list_length;
    int save_length_list = list_length - 1;
    int save_pos;
    for (list_length; list_length != 1;) {
        save_pos = findmini(l_a, list_length);
        findbottom(save_pos, &list_length, &l_a, &l_b);
        save_pos = findmini(l_a, list_length);
        findtop(save_pos, &list_length, &l_a, &l_b);
    }
    for (int decr = 0; decr < save_length_list; decr++)
        pa(l_a, l_b);
    if (condi == 0)
        write(1, "\n", 1);
}