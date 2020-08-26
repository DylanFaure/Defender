/*
** EPITECH PROJECT, 2020
** st_game.c
** File description:
** create struct for game
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/my.h"
#include "../include/my_defender.h"

game st_game(game assets)
{
    assets.background_game = create_bg_game();
    assets.mushroom = create_mushroom();
    assets.pause = create_pause_background();
    assets.resume_button = create_resume_button();
    assets.restart_button = create_restart_button();
    assets.quit_button = create_quit_button();
    assets.door_castle = create_door_castle();
    assets.door_mushroom = create_door_mushroom();
    assets.money = create_money();
    assets.life_castle = create_life_castle();
    assets.life_mushroom = create_life_mushroom();
    assets.boost_tower = create_boost_tower();
    assets.damage_tower = create_damage_tower();
    assets.money_tower = create_money_tower();
    assets.slow_tower = create_slow_tower();
    assets.background_game_circle = create_bg_game_circle();
    return (assets);
}
