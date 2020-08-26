/*
** EPITECH PROJECT, 2020
** st_clock.c
** File description:
** create struct for clock
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

clock st_clock(clock clock_game)
{
    clock_game.c_moove = create_c_clock();
    clock_game.c_life_castle = create_c_clock();
    clock_game.c_life_mushroom = create_c_clock();
    clock_game.c_money = create_c_clock();
    return (clock_game);
}
