/*
** EPITECH PROJECT, 2020
** create_exit_button.c
** File description:
** create exit button
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_exit_button(void)
{
    sfTexture *t_exit_button;
    sfSprite *s_exit_button;

    t_exit_button = sfTexture_createFromFile("assets/exit_button.png", NULL);
    s_exit_button = sfSprite_create();
    sfSprite_setTexture(s_exit_button, t_exit_button, sfTrue);
    sfSprite_setPosition(s_exit_button, (sfVector2f){1350, 650});
    sfSprite_setTextureRect(s_exit_button, (sfIntRect){0, 0, 332, 127});
    return (s_exit_button);
}
