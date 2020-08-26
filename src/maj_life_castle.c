/*
** EPITECH PROJECT, 2020
** maj_life.c
** File description:
** maj_life
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

void maj_life_castle(game assets, nb life)
{
    static char *str_life_castle;

    if (sfSprite_getPosition(assets.mushroom).x >= 1920) {
        life.l_castle -= life.l_mushroom;
        if (life.l_castle < 100 && life.l_castle >= 10)
            sfText_setPosition(assets.life_castle, (sfVector2f){1620, 90});
        else if (life.l_castle < 10)
            sfText_setPosition(assets.life_castle, (sfVector2f){1650, 90});
        if (life.l_castle < 0)
            life.l_castle = 0;
        str_life_castle = my_inttostr(life.l_castle, str_life_castle);
        sfText_setString(assets.life_castle, str_life_castle);
        free(str_life_castle);
    }
}
