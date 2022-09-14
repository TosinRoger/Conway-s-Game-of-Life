#include <allegro5/allegro5.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>

#include "constant.h"
#include "gameController.h"

#ifndef APPLICATION_H
#define APPLICATION_H

#define WHITE al_map_rgb(255, 255, 255)
#define TITLE "Conway's game life"

void runApplication();

#endif
