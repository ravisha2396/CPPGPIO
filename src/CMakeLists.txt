set(SOURCES main.cpp CPPGPIO/cppgpio.cpp)
idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS . ../include/CPPGPIO)