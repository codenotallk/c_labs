cmake_minimum_required (VERSION 3.7.0)

set (PROJECT_NAME Hexagonal)

project (${PROJECT_NAME})

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99 -no-pie")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_BUILD_TYPE Debug)

add_executable (hexagonal "")
target_link_libraries (hexagonal PUBLIC sat pthread)
target_sources (hexagonal
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/src/main.c
    ${CMAKE_CURRENT_LIST_DIR}/src/domain/typewriter.c
    ${CMAKE_CURRENT_LIST_DIR}/src/adapters/display/display.c    
    ${CMAKE_CURRENT_LIST_DIR}/src/adapters/keyboard/keyboard.c
    ${CMAKE_CURRENT_LIST_DIR}/src/adapters/udp_server/udp_server.c
)

target_include_directories (hexagonal
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/src/domain
    ${CMAKE_CURRENT_LIST_DIR}/src/domain/ports
    ${CMAKE_CURRENT_LIST_DIR}/src/adapters/display
    ${CMAKE_CURRENT_LIST_DIR}/src/adapters/keyboard
    ${CMAKE_CURRENT_LIST_DIR}/src/adapters/udp_server
)