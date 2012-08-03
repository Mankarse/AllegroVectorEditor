#include <stdio.h>
#include <allegro5/allegro.h>
#include <iostream>
#include "ave/Canvas.h"
#include "ave/Viewport.h"
int main(int argc, char **argv){
    ALLEGRO_DISPLAY *display = NULL;
    
    if(!al_init()) {
        fprintf(stderr, "failed to initialize allegro!\n");
        return -1;
    }
    if(!al_install_keyboard())
    {
        std::cerr << "Evan your keyboard is broken again.\n";
        return -1;
    }
    if(!al_init_primitives_addon())
    {
        std::cerr << "Primitives failed to initialise\n";
        return -1;
    }
    display = al_create_display(640, 480);
    if(!display) {
        fprintf(stderr, "failed to create display!\n");
        return -1;
    }
    
    
    
    ave::Canvas canvas;
    ave::Viewport viewport(canvas);
    ALLEGRO_KEYBOARD_STATE keyboard;
    al_get_keyboard_state(&keyboard);
    while(!al_key_down(&keyboard, ALLEGRO_KEY_ESCAPE)) {
        al_clear_to_color(al_map_rgb(255,255,255));

        viewport.drawToDisplay(display);
        
        al_flip_display();
        // 10 FPS! Whoo.
        al_rest(0.1);
        al_get_keyboard_state(&keyboard);
    }
    
    
    
    
    
    al_destroy_display(display);
    
    return 0;
}
