/*
** EPITECH PROJECT, 2020
** create_money.c
** File description:
** create_money
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

sfText *create_money(void)
{
    sfFont *font_money;
    sfText *text_money;
    sfColor color_money;

    font_money = sfFont_createFromFile("assets/grobold.ttf");
    text_money = sfText_create();
    sfText_setString(text_money, "250$");
    sfText_setFont(text_money, font_money);
    sfText_setCharacterSize(text_money, 100);
    color_money = sfColor_fromRGB(0, 200, 0);
    sfText_setPosition(text_money, (sfVector2f){140, 100});
    sfText_setColor(text_money, color_money);
    return (text_money);
}
