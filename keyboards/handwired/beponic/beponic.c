#include "beponic.h"
#include "tmk_core/protocol/lufa/LUFA-git/LUFA/Drivers/Peripheral/TWI.h"
#include "avr/ssd1306.c"
#include "avr/twimaster.c"


gml_fun = 0;
gml_had_fun = 0;
caps_lock = 0;

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
          enable_polyphony();
          set_polyphony_rate(3);

      #endif
  }
void matrix_scan_user(void) {
      iota_gfx_task();  // this is what updates the display continuously
}

void led_set_kb(uint8_t usb_led) {
  // usb_led = 3 if active, but the inactive value are 0 or... 1.
  if (usb_led > 1) {
    caps_lock = 1;
  } else {
    caps_lock = 0;
  }
  // caps_lock = usb_led;
}