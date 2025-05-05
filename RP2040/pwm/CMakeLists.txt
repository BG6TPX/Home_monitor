cmake_minimum_required(VERSION 3.13...3.27)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(./pico_sdk_import.cmake)

project(Home_monitor)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(hello_pwm
        hello_pwm.c
        )

# pull in common dependencies and additional pwm hardware support
target_link_libraries(hello_pwm pico_stdlib hardware_pwm)

# create map/bin/hex file etc.
pico_add_extra_outputs(hello_pwm)

# add url via pico_set_program_url
# example_auto_set_url(hello_pwm)
