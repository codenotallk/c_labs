add_executable (c_asm_05 "")
target_sources (c_asm_05 
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/main.c
    ${CMAKE_CURRENT_LIST_DIR}/assembly.asm
)