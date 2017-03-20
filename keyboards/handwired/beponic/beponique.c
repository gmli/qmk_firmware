#include "beponique.h"
#include "tmk_core/protocol/lufa/LUFA-git/LUFA/Drivers/Peripheral/TWI.h"
#include "avr/ssd1306.c"
#include "avr/twimaster.c"


void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    MCUCR |= (1<<JTD);
    MCUCR |= (1<<JTD);

    // Turn status LED on
    DDRE |= (1<<6);
    PORTE |= (1<<6);

    matrix_init_user();
}

// for oled display
void matrix_init_user(void) {
    // calls code for the SSD1306 OLED
    //TWI init, for 16mhz controler use 800000, 8mhz use 400000
          TWI_Init(TWI_BIT_PRESCALE_1, TWI_BITLENGTH_FROM_FREQ(1, 800000));
         iota_gfx_init();   // turns on the display
      #ifdef AUDIO_ENABLE
          startup_user();
      #endif
  }
  void matrix_scan_user(void) {
      iota_gfx_task();  // this is what updates the display continuously
  }