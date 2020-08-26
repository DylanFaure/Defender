/*
** EPITECH PROJECT, 2020
** gestion_start.c
** File description:
** gestion_start
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

int gestion_start(menu images, sfRenderWindow *window)
{
    static int xmouse;
    static int ymouse;

    if (sfMouse_isButtonPressed (sfMouseLeft)) {
        xmouse = sfMouse_getPositionRenderWindow(window).x;
        ymouse = sfMouse_getPositionRenderWindow(window).y;
        if (xmouse >= sfSprite_getPosition(images.start_button).x &&
            xmouse <= sfSprite_getPosition(images.start_button).x + 358 &&
            ymouse >= sfSprite_getPosition(images.start_button).y &&
            ymouse <= sfSprite_getPosition(images.start_button).y + 140) {
            sfSprite_setTextureRect(images.start_button,
                                    (sfIntRect){716, 0, 358, 140});
            sfSprite_destroy(images.start_button);
            sfSprite_destroy(images.exit_button);
            sfSprite_destroy(images.background_menu);
            return (1);
        }
    }
    return (0);
}
