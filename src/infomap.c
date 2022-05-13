/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** struct_init
*/

#include "bsq.h"

int hide_first_line(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    return (i);
}

void infomap(map_t *mapi, char *buffer)
{
    int i = 0;
    mapi->rows = my_getnbr(buffer);
    mapi->cols = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    while (buffer[i] != '\n') {
        i++;
        mapi->cols++;
    }
}
