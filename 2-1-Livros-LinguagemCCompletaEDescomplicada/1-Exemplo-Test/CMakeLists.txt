project(C_Estudos C)

file(GLOB_RECURSE SOURCES "src/**/*.c")

add_executable(2-Livros-LinguagemCCompletaEDescomplicada-1-Exemplo-Test main.c ${SOURCES})