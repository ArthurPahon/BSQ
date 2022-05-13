/*
** EPITECH PROJECT, 2022
** Modules
** File description:
** proto
*/

#ifndef PROTO_H_
    #define PROTO_H_

    #include "struct.h"

    char *open_read_file(char const *filepath);
    int check_errors(char *buffer, map_t *mapi);
    int first_line_nbr(char *buffer, map_t *mapi);
    int check_char_map(char *buffer);
    int lines_same_length(char *buffer, map_t *mapi);
    int min_nbr_lines(map_t *mapi);
    int check_end_line(map_t *mapi);
    void get_map(char *buffer, map_t *mapi);
    int hide_first_line(char *buffer);
    void map_of_nbrs(map_t *mapi);
    int comp_min(map_t *mapi, int l, int c);
    void algo(map_t *mapi);
    void max_value(map_t *mapi, coord_t *coord);
    void infomap(map_t *mapi, char *buffer);
    void drawit(map_t *mapi, coord_t *coord);

#endif /* !PROTO_H_ */
