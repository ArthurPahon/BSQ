/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-BSQ-arthur.pahon
** File description:
** algo_1
*/

#include "bsq.h"

void drawit(map_t *mapi, coord_t *coord)
{
    int x = coord->c;
    int l = coord->l - coord->max;
    int c = coord->c - coord->max;

    while (coord->l > l) {
        while (coord->c > c) {
            mapi->map[coord->l][coord->c] = 'x';
            coord->c--;
        }
        coord->l--;
        coord->c = x;
    }
}

void max_value(map_t *mapi, coord_t *coord)
{
    int l = 1;
    int c = 1;
    coord->max = 0;

    while (l < mapi->rows) {
        while (c < mapi->cols) {
            if (coord->max < mapi->map2[l][c]) {
                coord->max = mapi->map2[l][c];
                coord->l = l;
                coord->c = c;
            }
            c++;
        }
        l++;
        c = 0;
    }
}

int comp_min(map_t *mapi, int l, int c)
{
    int nb1 = mapi->map2[l - 1][c];
    int nb2 = mapi->map2[l - 1][c - 1];
    int nb3 = mapi->map2[l][c - 1];
    int nb4;

    if (nb1 < nb2)
        nb4 = nb1;
    else
        nb4 = nb2;
    if (nb4 > nb3)
        nb4 = nb3;
    return (nb4);
}

void algo(map_t *mapi)
{
    int l = 1;
    int c = 1;

    while (l < mapi->rows) {
        while (c < mapi->cols) {
            if (mapi->map2[l][c] == 1)
                mapi->map2[l][c] = mapi->map2[l][c] + comp_min(mapi, l, c);
            c++;
        }
        l++;
        c = 1;
    }
}
