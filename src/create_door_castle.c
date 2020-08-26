/*
** EPITECH PROJECT, 2020
** create_door_castle.c
** File description:
** create door castle
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_door_castle(void)
{
    sfTexture *t_door_castle;
    sfSprite *s_door_castle;

    t_door_castle = sfTexture_createFromFile("assets/door_castle.png", NULL);
    s_door_castle = sfSprite_create();
    sfSprite_setTexture(s_door_castle, t_door_castle, sfTrue);
    sfSprite_setPosition(s_door_castle, (sfVector2f){1870, 760});
    return (s_door_castle);
}
