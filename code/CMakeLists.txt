project(kadane)

set(EXECUTABLES
    "main.c"
    "Subroutines/kadane.c"
    "Subroutines/add.c"
    "Subroutines/remove.c"
    "Subroutines/scan.c"
    "Subroutines/sumDimentions.c"
    "Subroutines/subroutines.h"
)

add_executable(kadane 
    ${EXECUTABLES}
)

target_include_directories(kadane
    PRIVATE "Subroutines/"
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${EXECUTABLES})