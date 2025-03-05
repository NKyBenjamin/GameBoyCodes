#include <gb/gb.h>
#include <stdio.h>
#include "XOSprites.c"

void main() {
    UINT8 currentspriteindex = 0;

    set_sprite_data(0, 2, XOSprites);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while(1) {
        currentspriteindex = !currentspriteindex;
        set_sprite_tile(0, currentspriteindex);
        wait_vbl_done();
        delay(500);
        
    }
}
    

