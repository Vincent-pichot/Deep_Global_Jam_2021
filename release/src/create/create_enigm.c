/*
** EPITECH PROJECT, 2020
** create enigm
** File description:
** file for create the enigm
*/

#include "my.h"

sfSprite *create_plaque(void)
{
    sfSprite *plaque;
    sfTexture *texplaque;

    plaque = sfSprite_create();
    texplaque = sfTexture_createFromFile("assets/you_win.png", NULL);
    sfSprite_setTexture(plaque, texplaque, sfTrue);
    return (plaque);
}

sfSprite *create_lampe(void)
{
    sfSprite *lampe;
    sfTexture *texlampe;

    lampe = sfSprite_create();
    texlampe = sfTexture_createFromFile("assets/you_win.png", NULL);
    sfSprite_setTexture(lampe, texlampe, sfTrue);
    return (lampe);
}