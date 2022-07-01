/*
** EPITECH PROJECT, 2021
** my_gtnbr
** File description:
** task
*/

int	my_getnbr(char const *str)
{
    int	z = 0;
    int	i = 0;
    int	nbr = 0;

    if (str[z] == '-')
        i = 1;
    if (str[z] == '-')
        z++;
    while (str[z] >= 48 && str[z] <= 57)
    {
        nbr *= 10;
        nbr += (str[z] - 48);
        z++;
    }
    if (i == 1)
        nbr = -nbr;
    return (nbr);
}
