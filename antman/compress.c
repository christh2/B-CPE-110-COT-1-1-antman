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
#include <fcntl.h>

int read_file(int ac, char **av)
{
    struct stat size;
    stat(av[1], &size);
    int value = size.st_size;
    int fd, read_size;
    char freq[256] = {0};
    fd = open(av[1], O_RDONLY); if (fd == -1) return (84);
    char *buffer = (char *)malloc(sizeof(char *) * (value + 1));
    if (buffer == NULL) {
        close (fd);
    }
    read_size = read(fd, buffer, value);
    for (int i = 0; i < value; i++) {
        int a = (int)buffer[i];
        freq[(int)buffer[i]]++;
    }
    close (fd);
}

/* void print(void) */
/* { */
/*     /\*for (int j = 0; j < 256; j++) { */
/*         if (freq[j] > 0) { */
/*             printf("letter %c = frequency %d\n", j, freq[j]); */
/*         } */
/*     }*\/ */
/* } */
int main(int ac, char **av)
{
    if (ac != 2) return (84);
    read_file(ac, av);
}
