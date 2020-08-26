/*
** EPITECH PROJECT, 2020
** gestion_button_game.c
** File description:
** gestion button game
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

int gestion_resume_button(int xmouse, int ymouse, game assets)
{
    if (xmouse >= sfSprite_getPosition(assets.resume_button).x &&
        xmouse <= sfSprite_getPosition(assets.resume_button).x + 128 &&
        ymouse >= sfSprite_getPosition(assets.resume_button).y &&
        ymouse <= sfSprite_getPosition(assets.resume_button).y + 32)
        return (1);
    return (0);
}

int gestion_restart_button(int xmouse, int ymouse, game assets)
{
    if (xmouse >= sfSprite_getPosition(assets.restart_button).x &&
        xmouse <= sfSprite_getPosition(assets.restart_button).x + 128 &&
        ymouse >= sfSprite_getPosition(assets.restart_button).y &&
        ymouse <= sfSprite_getPosition(assets.restart_button).y + 32)
        return (1);
    return (0);
}

int gestion_quit_button(int xmouse, int ymouse, game assets)
{
    if (xmouse >= sfSprite_getPosition(assets.quit_button).x &&
        xmouse <= sfSprite_getPosition(assets.quit_button).x + 128 &&
        ymouse >= sfSprite_getPosition(assets.quit_button).y &&
        ymouse <= sfSprite_getPosition(assets.quit_button).y + 32)
        return (1);
    return (0);
}

void gestion_button_game(game assets, sfRenderWindow *window)
{
    static int xmouse;
    static int ymouse;
    static int x;
    int resume_value = 0;
    int restart_value = 0;
    int quit_value = 0;

    xmouse = sfMouse_getPositionRenderWindow(window).x;
    ymouse = sfMouse_getPositionRenderWindow(window).y;
    resume_value = gestion_resume_button(xmouse, ymouse, assets);
    restart_value = gestion_restart_button(xmouse, ymouse, assets);
    quit_value = gestion_quit_button(xmouse, ymouse, assets);
    x = (resume_value == 1) ? 128 : 0;
    sfSprite_setTextureRect(assets.resume_button, (sfIntRect){x, 0, 128, 32});
    x = (restart_value == 1) ? 128 : 0;
    sfSprite_setTextureRect(assets.restart_button, (sfIntRect){x, 0, 128, 32});
    x = (quit_value == 1) ? 128 : 0;
    sfSprite_setTextureRect(assets.quit_button, (sfIntRect){x, 0, 128, 32});
}
