/*
** EPITECH PROJECT, 2020
** create_start_button.c
** File description:
** create start button
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_start_button(void)
{
    sfTexture *t_start_button;
    sfSprite *s_start_button;

    t_start_button = sfTexture_createFromFile("assets/start_button.png", NULL);
    s_start_button = sfSprite_create();
    sfSprite_setTexture(s_start_button, t_start_button, sfTrue);
    sfSprite_setPosition(s_start_button, (sfVector2f){250, 650});
    sfSprite_setTextureRect(s_start_button, (sfIntRect){0, 0, 358, 140});
    return (s_start_button);
}
