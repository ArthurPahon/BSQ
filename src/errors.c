/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-BSQ-arthur.pahon
** File description:
** error_1
*/

#include "bsq.h"

int check_end_line(map_t *mapi)
{
    for (int l = 0; l < mapi->rows; l++) {
        if (mapi->map[l][mapi->cols] != '\0')
            return (84);
    }
    return (0);
}

int min_nbr_lines(map_t *mapi)
{
    if (mapi->rows >= 1)
        return (0);
    else
        return (84);
}

int lines_same_length(char *buffer, map_t *mapi)
{
    int i = 0;
    int y = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    while (buffer[i] != '\0') {
        while (buffer[i] != '\n') {
            y++;
            i++;
        }
        if (y != mapi->cols)
            return (84);
        y = 0;
        i++;
    }
    return (0);
}

int check_char_map(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    while (buffer[i] != '\0') {
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n')
            return (84);
        i++;
    }
    return (0);
}

int first_line_nbr(char *buffer, map_t *mapi)
{
    int i = 0;
    int z = 0;

    while (buffer[i] != '\n')
        if (buffer[i] >= 48 && buffer[i] <= 57)
            i++;
        else
            return (84);
    i++;
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            z++;
        i++;
    }
    if (z == mapi->rows)
        return (0);
    else
        return (84);
}
