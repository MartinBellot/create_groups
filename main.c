/*
** EPITECH PROJECT, 2021
** Create random group
** File description:
** Create random groups project
*/

#include <stdio.h>
#include <stdlib.h>


int create_groups(int ac, char **av)
{
    int i = 0;
    int nb_persons = 0;
    int nb_teams = 0;
    char **persons = malloc(sizeof(char *) * nb_persons);
    printf("\n\nFIRST STEP: Add all persons:\n");
    printf("(write 'q' to STOP) \n");
    char val[20];
    while (val[0] != 'q') {
        printf("->");
        scanf("%s", &val);
        persons[nb_persons] = val;
        if (val[0] != 'q')
            printf("[+] '%s' added !\n", val);
            nb_persons++;
    }
    printf("Number of persons: %d", nb_persons-1);
    printf("\n\nSECOND STEP: Number of teams:\n");
    printf("->");
    scanf("%d", &nb_teams);
    if (nb_teams < nb_persons) {
        while (i < nb_persons - 1) {
            printf("%s indice: %d\n", persons[i], i);
            i++;
        }
    } else{
        printf("ERROR.\n");
        return (0);
    }
}

int main(int ac, char **av)
{
    create_groups(ac, av);
    return (0);
}