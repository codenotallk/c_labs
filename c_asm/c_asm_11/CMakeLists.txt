add_executable (c_asm_11 "")
target_sources (c_asm_11 
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/main.c
    ${CMAKE_CURRENT_LIST_DIR}/assembly.asm
)