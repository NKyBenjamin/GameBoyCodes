#include <gb/gb.h>
#include <stdio.h>
#include "TheSmiler.c"

void main() {
    UINT8 currentspriteindex = 0;

    set_sprite_data(0, 2, Smiley);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while(1) {
        switch(joypad()) {
            case J_LEFT:
                scroll_sprite(0,-10,0);
                break;
            case J_RIGHT:
                scroll_sprite(0,10,0);
                break;
            case J_UP:
                scroll_sprite(0,0,-10);
                break;
            case J_DOWN:
                scroll_sprite(0,0,10);
                break;
        }
        
        delay(10);
        
    }
}