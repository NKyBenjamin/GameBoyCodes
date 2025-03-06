#include <gb/gb.h>
#include "SimpleBackgroundSprites.c"
#include "TheSimplestBackground.c"
#include "windowedmap.c"
#include <gb/font.h>

void main() {
    font_t min_font;

    font_init();
    min_font = font_load(font_min);
    font_set(min_font);

    set_bkg_data(37, 7, BackgroundSprites);
    set_bkg_tiles(0, 0, 40, 18, backgrounddemo);
    
    set_win_tiles(0, 0, 5, 1, windowmap);
    SHOW_BKG;
    SHOW_WIN;
    DISPLAY_ON;

    /* while (1) {
        scroll_bkg(1,0);
        delay(100);
    } */
}