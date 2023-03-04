# get_next_line
This is my implementation of the get_next_line project from 42 school.

Description
get_next_line is a function that reads a line from a file descriptor and returns it as a string. 
The function can be called repeatedly to read successive lines from the same file descriptor. 
The function is designed to work with multiple file descriptors and to handle input from standard input and/or files.

Installation
To install and use the get_next_line function, follow these steps:

Clone the repository: git clone
Build the program executable: make
Note: The make command will compile all the .c files in the src directory and create a libgnl.a file, 
which is the static library that contains the get_next_line function.

Usage
To use the get_next_line function in your project, follow these steps:

Include the get_next_line.h header file in your project: #include "get_next_line.h"
Call the get_next_line function in your project as needed.
Note: The get_next_line function takes a file descriptor as its first argument and returns the next line from that file descriptor as a string. 
The function also returns a value of 1 if there is still more input to read, 0 if the end of file has been reached, or -1 if an error has occurred.

Contents
The get_next_line project includes the following directories and files:

Makefile: The makefile for building the libgnl.a library.
get_next_line.h: The header file for the get_next_line function.
libgnl.a: The static library file that is created by running the make command.
