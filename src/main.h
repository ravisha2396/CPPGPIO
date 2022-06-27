// test programs
#pragma once

#include "cppgpio.h"

// Main class used for testing only
class Main final
{
public:
    void run(void);
    void setup(void);

    CPPGPIO::GpioOutput cppLed { GPIO_NUM_2, true };

    CPPGPIO::GpioInput cppButton { GPIO_NUM_0 };
    
    CPPGPIO::GpioInput cppButton2 { GPIO_NUM_12 };

    static void  button_event_handler(void *handler_args, esp_event_base_t base, int32_t id, void *event_data);
    // Event Handler for cppButton2
    static void  button2_event_handler(void *handler_args, esp_event_base_t base, int32_t id, void *event_data);

}; // Main Class