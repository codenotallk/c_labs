cmake_minimum_required (VERSION 3.7.0)

set (PROJECT_NAME ASM_EXAMPLES)

project (${PROJECT_NAME})

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99 -no-pie")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (CMAKE_BUILD_TYPE Debug)

enable_language (C ASM_NASM)

set (CMAKE_ASM_NASM_SOURCE_FILE_EXTENSIONS asm)
set (CMAKE_ASM_NASM_OBJECT_FORMAT elf64)

add_subdirectory (c_asm_01)
add_subdirectory (c_asm_02)
add_subdirectory (c_asm_03)
add_subdirectory (c_asm_04)
add_subdirectory (c_asm_05)
add_subdirectory (c_asm_06)
add_subdirectory (c_asm_07)
add_subdirectory (c_asm_08)
add_subdirectory (c_asm_09)
add_subdirectory (c_asm_10)
add_subdirectory (c_asm_11)
add_subdirectory (c_asm_12)
add_subdirectory (c_asm_13)