#include "driver/spi_common.h"
#include "pcd8544.h"

//esp32 & nokia5110 LCD
/*
RST->D19
CE ->D22
DO ->D21
DIN->D23
CLK->D18
DL ->D4
*/

void app_main(void) {
    pcd8544_config_t config = {
        .spi_host = SPI3_HOST,
        .is_backlight_common_anode = true,
    };
    pcd8544_init(&config);
    pcd8544_clear_display();
    pcd8544_set_backlight(true);
    pcd8544_finalize_frame_buf();
    pcd8544_puts("Hello,PCD8544!");
    pcd8544_sync_and_gc();
    pcd8544_free();
}