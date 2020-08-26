/*
** EPITECH PROJECT, 2020
** create_damage_tower.c
** File description:
** create damage tower
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_damage_tower(void)
{
    sfTexture *t_damage_tower;
    sfSprite *s_damage_tower;

    t_damage_tower = sfTexture_createFromFile("assets/damage_tower.png", NULL);
    s_damage_tower = sfSprite_create();
    sfSprite_setTexture(s_damage_tower, t_damage_tower, sfTrue);
    sfSprite_setPosition(s_damage_tower, (sfVector2f){-1000, 0});
    sfSprite_setTextureRect(s_damage_tower, (sfIntRect){625, 625, 625, 625});
    return (s_damage_tower);
}
