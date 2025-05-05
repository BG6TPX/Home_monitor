cmake_minimum_required(VERSION 3.13...3.27)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(./pico_sdk_import.cmake)

project(Home_monitor)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(uart
        uart.c
        )
      
# pull in common dependencies
target_link_libraries(uart pico_stdlib)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(uart)

# add url via pico_set_program_url
# example_auto_set_url(hello_serial)