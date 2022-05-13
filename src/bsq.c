/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-BSQ-arthur.pahon
** File description:
** main
*/

#include "bsq.h"

void myfree(map_t *mapi, coord_t *coord)
{
    free(mapi->map2);
    free(mapi->map);
    free(mapi);
    free(coord);
}

void my_super_putstr(map_t *mapi)
{
    int i = 0;

    while (i < mapi->rows) {
        my_putstr(mapi->map[i]);
        my_putchar('\n');
        i++;
    }
}

int main(int ac,char *av[])
{
    map_t *mapi = malloc(sizeof(map_t));
    coord_t *coord = malloc(sizeof(coord_t));
    char *buffer = open_read_file(av[1]);

    infomap(mapi, buffer);
    get_map(buffer, mapi);
    if (check_errors(buffer, mapi) == 84)
        return (84);
    map_of_nbrs(mapi);
    algo(mapi);
    max_value(mapi, coord);
    drawit(mapi, coord);
    my_super_putstr(mapi);
    myfree(mapi, coord);
    return (0);
}
