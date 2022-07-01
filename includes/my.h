/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-allan.charlier
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_


typedef struct element {
    int number;
    struct element *next;
    struct element *prev;
} element;

typedef struct pile {
    int o;
    element *top;
    element *bottom;
} pile;

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int depile(pile *pa);
void empile(pile *pa, int nb);
int findmini(pile *l_a, int list_length);
int checkorder(pile *l_a);
pile *node(int x, pile *l_a);
pile *pb(pile *l_b, pile *l_a);
void wrt_pb(pile **l_a);
void wrt_pa(pile **l_a);
pile *pa(pile *l_a, pile *l_b);
pile *pop_in(pile *l_a);
void ra(pile *l_a);
void rra(pile *l_a);
void selectalgo(pile *l_a, pile *l_b, int list_length);
void findtop(int save_pos, int *list_length, pile **l_a, pile **l_b);
void findbottom(int save_pos, int *list_length, pile **l_a, pile **l_b);


#endif
