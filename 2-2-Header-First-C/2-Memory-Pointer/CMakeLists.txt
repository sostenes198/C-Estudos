project(C_Estudos C)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(2-2-Header-First-C-2-Memory-Pointer main.c ${SOURCES})