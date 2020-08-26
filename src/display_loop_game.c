/*
** EPITECH PROJECT, 2020
** my_defender.c
** File description:
** display menu
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

void display_loop_game(sfRenderWindow *window, game assets)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, assets.background_game, NULL);
    sfRenderWindow_drawSprite(window, assets.mushroom, NULL);
    sfRenderWindow_drawSprite(window, assets.door_mushroom, NULL);
    sfRenderWindow_drawSprite(window, assets.door_castle, NULL);
    sfRenderWindow_drawText(window, assets.money, NULL);
    sfRenderWindow_drawText(window, assets.life_castle, NULL);
    sfRenderWindow_drawText(window, assets.life_mushroom, NULL);
    sfText_setPosition(assets.life_mushroom, (sfVector2f)
                        {sfSprite_getPosition(assets.mushroom).x + 70,
                                sfSprite_getPosition(assets.mushroom).y - 25});
    sfRenderWindow_drawSprite(window, assets.damage_tower, NULL);
    sfRenderWindow_display(window);
}
