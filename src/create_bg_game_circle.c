/*
** EPITECH PROJECT, 2020
** create_bg_game_circle.c
** File description:
** create bg game circle
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_bg_game_circle(void)
{
    sfTexture *t_bg_game_circle;
    sfSprite *s_bg_game_circle;

    t_bg_game_circle = sfTexture_createFromFile
        ("assets/background_game_circle.png", NULL);
    s_bg_game_circle = sfSprite_create();
    sfSprite_setTexture(s_bg_game_circle, t_bg_game_circle, sfTrue);
    return (s_bg_game_circle);
}
