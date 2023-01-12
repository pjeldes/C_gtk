cmake_minimum_required(VERSION 3.0)

# nombre del projecto

project(app_gtk)

# todos los archivos c añadidos a una variable
file(GLOB SRC *.c)

# Use pkg-config to find the location of GTK3 library
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

# añadir directorio solo para encabezados (*.h)
include_directories(include)

add_executable(${PROJECT_NAME} ${SRC})

# Link the executable target against the library
target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES})




