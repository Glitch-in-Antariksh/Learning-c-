cmake_minimum_required(VERSION 3.31)
project(learning_c_sem1_basics_ C)

set(CMAKE_C_STANDARD 11)

add_executable(learning_c_sem1_basics_ main.c
        "Bubble sort with binary procedure.c"
        "matrix_operations.c"
        "matrix_functions.c"
        "matrix_functions.h"
        Structures_beginner_emp_code.c
)
