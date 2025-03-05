#include <gb/gb.h>
#include <stdio.h>
#include "MyName.c"

void main() {
    UINT8 currentspriteindex = 0;

    set_sprite_data(0, 3, NKySprites);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while(1) {
        currentspriteindex = !currentspriteindex;
        set_sprite_tile(0, currentspriteindex);
        scroll_sprite(0,10,0);
        wait_vbl_done();
        delay(500);
        
    }
}
    

