/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-BSQ-arthur.pahon
** File description:
** 2d_array
*/

#include "bsq.h"

void map_of_nbrs(map_t *mapi)
{
    int l = 0;
    int c = 0;

    mapi->map2 = malloc(sizeof(int *) * (mapi->rows + 1));
    while (l < mapi->rows) {
        mapi->map2[l] = malloc(sizeof(int) * (mapi->cols + 1));
        while (c < mapi->cols) {
            if (mapi->map[l][c] == '.')
                mapi->map2[l][c] = 1;
            if (mapi->map[l][c] == 'o')
                mapi->map2[l][c] = 0;
            c++;
        }
        l++;
        c = 0;
    }
    mapi->map2[l] = NULL;
}

void get_map(char *buffer, map_t *mapi)
{
    int i = hide_first_line(buffer);
    int l = 0;
    int c = 0;

    mapi->map = malloc(sizeof(char *) * (mapi->rows + 1));
    while (l < mapi->rows) {
        mapi->map[l] = malloc(sizeof(char) * (mapi->cols + 1));
        while (buffer[i] != '\n') {
            mapi->map[l][c] = buffer[i];
            c++;
            i++;
        }
        mapi->map[l][c] = '\0';
        i++;
        l++;
        c = 0;
    }
    mapi->map[l] = NULL;
}
