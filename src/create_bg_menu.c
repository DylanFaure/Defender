/*
** EPITECH PROJECT, 2020
** create_bg_menu.c
** File description:
** create bg menu
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"

sfSprite *create_bg_menu(void)
{
    sfTexture *t_bg_menu;
    sfSprite *s_bg_menu;

    t_bg_menu = sfTexture_createFromFile("assets/background_menu.png", NULL);
    s_bg_menu = sfSprite_create();
    sfSprite_setTexture(s_bg_menu, t_bg_menu, sfTrue);
    return (s_bg_menu);
}
