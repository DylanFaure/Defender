/*
** EPITECH PROJECT, 2020
** maj_money.c
** File description:
** maj_money
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

void maj_money(game assets, sfClock *clock_money)
{
    static int nb_money = 250;
    static char *str_money;

    if (sfTime_asSeconds(sfClock_getElapsedTime(clock_money)) > 1) {
        sfClock_restart(clock_money);
        nb_money += 50;
        if (nb_money >= 1000)
            sfText_setPosition(assets.money, (sfVector2f){110, 100});
        else
            sfText_setPosition(assets.money, (sfVector2f){140, 100});
        if (nb_money < 0)
            nb_money = 0;
        if (nb_money >= 9999)
            nb_money = 9999;
        str_money = my_inttostr_dollars(nb_money, str_money);
        sfText_setString(assets.money, str_money);
    }
}
