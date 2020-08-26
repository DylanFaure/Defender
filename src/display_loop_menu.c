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

void display_loop_menu(sfRenderWindow *window, menu images)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, images.background_menu, NULL);
    sfRenderWindow_drawSprite(window, images.start_button, NULL);
    sfRenderWindow_drawSprite(window, images.exit_button, NULL);
    sfRenderWindow_display(window);
}
