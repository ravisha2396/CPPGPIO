#include "main.h"
#include <iostream>

Main App;

void Main::run(void)
{
    vTaskDelay(pdMS_TO_TICKS(200));
    cppLed.setLevel(cppButton.read());
}

void Main::setup(void)
{
    cppButton.enableInterrupt(GPIO_INTR_NEGEDGE);
    cppButton.setEventHandler(&button_event_handler);

    cppButton2.enablePullup();
    cppButton2.enableInterrupt(GPIO_INTR_NEGEDGE);
    cppButton2.setEventHandler(&button2_event_handler);
}

extern "C" void app_main(void)
{
    esp_event_loop_create_default();

    App.setup();

    while (true)
    {
        App.run();
    }    
}

void  Main::button_event_handler(void *handler_args, esp_event_base_t base, int32_t id, void *event_data)
{
    std::cout << "Button triggered interrupt with ID: " << id << '\n';
}

void  Main::button2_event_handler(void *handler_args, esp_event_base_t base, int32_t id, void *event_data)
{
    std::cout << "Button triggered interrupt with ID: " << id << '\n';
}