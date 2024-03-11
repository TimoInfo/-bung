# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(libraries VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

# add a library for your function
add_library(function_c_lib_exec STATIC src/function.c)
# add the includes to the library
target_include_directories(function_c_lib_exec PUBLIC include)

# add a library for your print
add_library(print_c_lib_exec SHARED src/print.c)
# add the includes to the library
target_include_directories(print_c_lib_exec PUBLIC include)

# add an executabel and assign files to it
add_executable(libraries_ex_exec src/main.c)
# add the include directories
target_include_directories(libraries_ex_exec PUBLIC include)
# link your libraries
target_link_libraries(libraries_ex_exec PRIVATE function_c_lib_exec print_c_lib_exec)