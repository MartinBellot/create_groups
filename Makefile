##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for CreateGroup PROJECT
##

NAME = create_group

SRC = *.c


all:
	gcc ${SRC} -o ${NAME}


run: all
	./${NAME}