#include "driver/gpio.h"

namespace CPPGPIO{
    
    class GpioBase
        {
            protected:
                gpio_num_t _pin;
                bool _active_low;
        }; // GpioBase Class


}