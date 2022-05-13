/*
** EPITECH PROJECT, 2021
** Delivery
** File description:
** fs_open_file
*/

#include "bsq.h"

char *open_read_file(char const *filepath)
{
    struct stat *size = malloc(sizeof(struct stat));
    char *buffer;
    int fd;
    int bs;

    stat(filepath, size);
    buffer = malloc((size->st_size + 1) * sizeof(char));
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        exit(84);
    bs = read(fd, buffer, size->st_size);
    if (bs == -1)
        exit(84);
    close(fd);
    return (buffer);
}
