/*
** EPITECH PROJECT, 2020
** create_money_tower.c
** File description:
** create money tower
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_money_tower(void)
{
    sfTexture *t_money_tower;
    sfSprite *s_money_tower;

    t_money_tower = sfTexture_createFromFile("assets/money_tower.png", NULL);
    s_money_tower = sfSprite_create();
    sfSprite_setTexture(s_money_tower, t_money_tower, sfTrue);
    sfSprite_setPosition(s_money_tower, (sfVector2f){0, 200});
    sfSprite_setTextureRect(s_money_tower, (sfIntRect){625, 625, 625, 625});
    return (s_money_tower);
}
