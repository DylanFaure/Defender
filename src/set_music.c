/*
** EPITECH PROJECT, 2020
** set_music.c
** File description:
** set music
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

sfMusic *set_music(sfMusic *mushroom_revolt)
{
    mushroom_revolt = sfMusic_createFromFile("assets/mushroom_revolt.ogg");
    sfMusic_play(mushroom_revolt);
    sfMusic_setLoop(mushroom_revolt, sfTrue);
    return (mushroom_revolt);
}
