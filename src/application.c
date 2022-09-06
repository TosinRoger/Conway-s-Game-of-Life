#include "application.h"

void runApplication() {
    fillRandomMatrix();

    al_init();
    al_install_keyboard();

    // timer redraw screen in seconds
    ALLEGRO_TIMER* timer = al_create_timer(0.5);
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    ALLEGRO_DISPLAY* disp = al_create_display(WIDTH_SCREEN, HEIGHT_SCREEN);
    ALLEGRO_FONT* font = al_create_builtin_font();

    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(disp));
    al_register_event_source(queue, al_get_timer_event_source(timer));

    bool redraw = true;
    ALLEGRO_EVENT event;

    al_start_timer(timer);
    while(1) {
        al_wait_for_event(queue, &event);

        if(event.type == ALLEGRO_EVENT_TIMER)
         redraw = true;
        else if((event.type == ALLEGRO_EVENT_KEY_DOWN) || (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE))
         break;

        if(redraw && al_is_event_queue_empty(queue)) {
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font, WHITE, 10, 10, 0, TITLE);

            // draw a line
            al_draw_line(
                0, 
                DIVIDER_TITLE_POSITION_Y, 
                WIDTH_SCREEN, 
                DIVIDER_TITLE_POSITION_Y, 
                WHITE, 
                0
            );

            int cycle2 = executeGame(0, TABLE_SCREEN_POSITION_Y1, WIDTH_TABLE_SCREEN, HEIGHT_SCREEN);

            al_draw_text(font, WHITE, 500, 10, 0, "Cycler:");
            char count = cycle2 + '0';
            al_draw_text(font, WHITE, 600, 10, 0, &count);

            al_flip_display();

            redraw = false;
        }
    }

    al_destroy_font(font);
    al_destroy_display(disp);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);
}
