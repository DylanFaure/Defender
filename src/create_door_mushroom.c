/*
** EPITECH PROJECT, 2020
** create_door_mushroom.c
** File description:
** create door mushroom
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_door_mushroom(void)
{
    sfTexture *t_door_mushroom;
    sfSprite *s_door_mushroom;

    t_door_mushroom = sfTexture_createFromFile("assets/door_castle.png", NULL);
    s_door_mushroom = sfSprite_create();
    sfSprite_setTexture(s_door_mushroom, t_door_mushroom, sfTrue);
    sfSprite_setPosition(s_door_mushroom, (sfVector2f){-1, 300});
    return (s_door_mushroom);
}
