cmake_minimum_required(VERSION 3.13...3.27)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(./pico_sdk_import.cmake)

project(Home_monitor)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
add_executable(blink
    blink.c
    )

# pull in common dependencies
target_link_libraries(blink pico_stdlib)

if (PICO_CYW43_SUPPORTED)
    target_link_libraries(blink pico_cyw43_arch_none)
endif()

# create map/bin/hex file etc.
pico_add_extra_outputs(blink)

# add url via pico_set_program_url
#example_auto_set_url(blink)
