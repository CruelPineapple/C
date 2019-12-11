#Makefile

sources = hzz_list.c hzz_list1.c hzz_list2.c
ccflags = -Wall -g -fsanitize=address
CC = gcc
target = dsb
all:
	$(CC) $(sources) $(ccflags) -o $(target)