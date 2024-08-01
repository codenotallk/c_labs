cmake_minimum_required (VERSION 3.7.0)

set (PROJECT_NAME GTK)

project (${PROJECT_NAME})

set (CMAKE_C_FLAGS "-D_GNU_SOURCE -Wall -std=c99 -no-pie")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set (LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_BUILD_TYPE Debug)

file (GLOB SOURCES "*.c")

find_package (PkgConfig REQUIRED)
if (PKG_CONFIG_FOUND)
    pkg_check_modules (GTK REQUIRED gtk+-3.0)

    if (GTK_FOUND)
        foreach (SOURCE ${SOURCES})
            get_filename_component (name ${SOURCE} NAME_WE)
            add_executable (${name} ${SOURCE})
            target_link_libraries (${name} m ${GTK_LIBRARIES})
            message (STATUS "${name}")            
        endforeach ()

        include_directories (${GTK_INCLUDE_DIRS})
        link_directories (${GTK_LIBRARY_DIRS})
        add_definitions (${GTK_CFLAGS} ${GTK_CFLAGS_OTHER})
        
    endif ()
endif ()