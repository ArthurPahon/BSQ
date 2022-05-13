/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-BSQ-arthur.pahon
** File description:
** check_errors
*/

#include "bsq.h"

int checktwo(char *buffer, map_t *mapi)
{
    if (lines_same_length(buffer, mapi) == 84)
        return (84);
    if (min_nbr_lines(mapi) == 84)
        return (84);
    return (0);
}

int checkone(char *buffer, map_t *mapi)
{
    if (first_line_nbr(buffer, mapi) == 84)
        return (84);
    if (check_char_map(buffer) == 84)
        return (84);
    return (0);
}

int checkit(char *buffer, map_t *mapi)
{
    if (checkone(buffer, mapi) == 84)
        return (84);
    if (checktwo(buffer, mapi) == 84)
        return (84);
    return (0);
}

int check_errors(char *buffer, map_t *mapi)
{
    if (checkit(buffer, mapi) == 84)
        return (84);
    if (check_end_line(mapi) == 84)
        return (84);
    return (0);
}
