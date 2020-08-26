/*
** EPITECH PROJECT, 2020
** create_c_clock.c
** File description:
** create c_clock
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

sfClock *create_c_clock(void)
{
    sfClock *c_clock;

    c_clock = sfClock_create();
    return (c_clock);
}
