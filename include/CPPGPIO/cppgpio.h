#include "driver/gpio.h"

namespace CPPGPIO{
    
    class GpioBase
        {
            protected:
                gpio_num_t _pin;
                bool _active_low;
        }; // GpioBase Class

    // The class name is GpioInput and it inherits from GpioBase
    class GpioInput : public GpioBase
        {   
            // _init function is a private function of type esp_err_t
            private:
                esp_err_t _init(const gpio_num_t pin, const bool activeLow);

            public:
            // Constructors below
                GpioInput(const gpio_num_t pin, const bool activeLow);
                GpioInput(const gpio_num_t pin);
                GpioInput(void);
                esp_err_t init(const gpio_num_t pin, const bool activeLow);
                esp_err_t init(const gpio_num_t pin);
                int read(void);
        }; // GpioInput Class

    class GpioOutput : public GpioBase
        {
        private:
            int _level = 0;
            esp_err_t _init(const gpio_num_t pin, const bool activeLow);

        public:
            GpioOutput(const gpio_num_t pin, const bool activeLow);
            GpioOutput(const gpio_num_t pin);
            GpioOutput(void);
            esp_err_t init(const gpio_num_t pin, const bool activeLow);
            esp_err_t init(const gpio_num_t pin);
            esp_err_t on(void);
            esp_err_t off(void);
            esp_err_t toggle(void);
            esp_err_t setLevel(int level);
        }; // GpioOutput Class

}