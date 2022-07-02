CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Alimentacao.o  ${BUILD_DIR}/Animal.o ${BUILD_DIR}/Cuidador.o ${BUILD_DIR}/Herpestidae.o ${BUILD_DIR}/Ursidae.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}

${BUILD_DIR}/Alimentacao.o: ${INCLUDE_DIR}/Alimentacao.hpp  ${SRC_DIR}/zoologico/Alimentacao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/zoologico/Alimentacao.cpp -o ${BUILD_DIR}/Alimentacao.o

${BUILD_DIR}/Animal.o: ${INCLUDE_DIR}/Animal.hpp  ${SRC_DIR}/zoologico/Animal.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/zoologico/Animal.cpp -o ${BUILD_DIR}/Animal.o

${BUILD_DIR}/Cuidador.o: ${INCLUDE_DIR}/Cuidador.hpp  ${SRC_DIR}/zoologico/Cuidador.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/zoologico/Cuidador.cpp -o ${BUILD_DIR}/Cuidador.o 

${BUILD_DIR}/Herpestidae.o: ${INCLUDE_DIR}/Herpestidae.hpp  ${SRC_DIR}/zoologico/Herpestidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/zoologico/Herpestidae.cpp -o ${BUILD_DIR}/Herpestidae.o 

${BUILD_DIR}/Ursidae.o: ${INCLUDE_DIR}/Ursidae.hpp  ${SRC_DIR}/zoologico/Ursidae.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/zoologico/Ursidae.cpp -o ${BUILD_DIR}/Ursidae.o 

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Alimentacao.hpp  ${INCLUDE_DIR}/Animal.hpp ${INCLUDE_DIR}/Cuidador.hpp ${INCLUDE_DIR}/Herpestidae.hpp ${INCLUDE_DIR}/Ursidae.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/*
