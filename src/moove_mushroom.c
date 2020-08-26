/*
** EPITECH PROJECT, 2020
** gestion_mushroom.c
** File description:
** gestion_mushroom
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

void mushroom_right(game assets, sfClock *clock_moove)
{
    static int xrect = 0;

    sfSprite_move(assets.mushroom, (sfVector2f){5, 0});
    sfSprite_setTextureRect(assets.mushroom, (sfIntRect){xrect, 256, 160, 128});
    if (sfTime_asSeconds(sfClock_getElapsedTime(clock_moove)) > 0.1) {
        sfClock_restart(clock_moove);
        xrect = xrect + 160;
        if (xrect == 640)
            xrect = 0;
    }
}

void mushroom_down(game assets, sfClock *clock_moove)
{
    static int xrect = 0;

    sfSprite_move(assets.mushroom, (sfVector2f){0, 5});
    sfSprite_setTextureRect(assets.mushroom, (sfIntRect){xrect, 0, 160, 128});
    if (sfTime_asSeconds(sfClock_getElapsedTime(clock_moove)) > 0.1) {
        sfClock_restart(clock_moove);
        xrect = xrect + 160;
        if (xrect == 320)
            xrect = 0;
    }
}

void maj_life_mushroom(game assets, nb life)
{
    static char *str_life_mushroom;

    if (life.l_mushroom < 0)
        life.l_mushroom = 0;
    str_life_mushroom = my_inttostr(life.l_mushroom, str_life_mushroom);
    sfText_setString(assets.life_mushroom, str_life_mushroom);
    free(str_life_mushroom);
}

void moove_mushroom(game assets, sfClock *clock_moove, nb life)
{
    if (sfSprite_getPosition(assets.mushroom).x <= 530)
        mushroom_right(assets, clock_moove);
    else if (sfSprite_getPosition(assets.mushroom).x > 530
             && sfSprite_getPosition(assets.mushroom).y <= 860)
        mushroom_down(assets, clock_moove);
    else
        mushroom_right(assets, clock_moove);
    if (sfSprite_getPosition(assets.mushroom).x > 1920)
        sfSprite_setPosition(assets.mushroom, (sfVector2f){-200, 435});
    maj_life_mushroom(assets, life);
}
