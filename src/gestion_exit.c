/*
** EPITECH PROJECT, 2020
** gestion_exit.c
** File description:
** gestion_exit
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

int gestion_exit(menu images, sfRenderWindow *window)
{
    static int xmouse;
    static int ymouse;

    if (sfMouse_isButtonPressed (sfMouseLeft)) {
        xmouse = sfMouse_getPositionRenderWindow(window).x;
        ymouse = sfMouse_getPositionRenderWindow(window).y;
        if (xmouse >= sfSprite_getPosition(images.exit_button).x &&
            xmouse <= sfSprite_getPosition(images.exit_button).x + 332 &&
            ymouse >= sfSprite_getPosition(images.exit_button).y &&
            ymouse <= sfSprite_getPosition(images.exit_button).y + 127) {
            sfSprite_setTextureRect(images.exit_button,
                (sfIntRect){664, 0, 332, 127});
            sfSprite_destroy(images.start_button);
            sfSprite_destroy(images.exit_button);
            sfSprite_destroy(images.background_menu);
            sfRenderWindow_close(window);
            return (1);
        }
    }
    return (0);
}
