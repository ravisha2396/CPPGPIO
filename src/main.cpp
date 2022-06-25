// test programs

#include "main.h"

void Main::run(void)
{
    cppLed.setLevel(cppButton.read());
}

extern "C" void app_main(void)
{
    Main App;

    while (true)
    {
        App.run();
    }    
}