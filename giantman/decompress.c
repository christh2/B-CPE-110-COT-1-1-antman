/*
** EPITECH PROJECT, 2023
** antman
** File description:
** antman
*/

#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>


int read_file(int ac, char **av)
{
    struct stat size;
    stat(av[1], &size);
    int value = size.st_size;
    char *buffer = (char *)malloc(sizeof(char *) * (value + 1));
    int fd = open(av[1], O_RDONLY);
    int r = read(fd, buffer, value);
    if (fd == -1) return (84);
}

int main(int ac, char **av)
{
    if (ac != 2) return (84);
    read_file(ac, av);
}
