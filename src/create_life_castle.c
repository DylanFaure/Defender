/*
** EPITECH PROJECT, 2020
** create_life_castle.c
** File description:
** create_life_castle
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

sfText *create_life_castle(void)
{
    sfFont *font_life_castle;
    sfText *text_life_castle;

    font_life_castle = sfFont_createFromFile("assets/grobold.ttf");
    text_life_castle = sfText_create();
    sfText_setString(text_life_castle, "100");
    sfText_setFont(text_life_castle, font_life_castle);
    sfText_setCharacterSize(text_life_castle, 100);
    sfText_setPosition(text_life_castle, (sfVector2f){1590, 90});
    return (text_life_castle);
}
