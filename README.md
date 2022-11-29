# Project

  Write a simple UNIX command interpreter, "The Gates of Shell".

## Name

   sh;

## Requirements

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    Your shell should not have any memory leaks
    No more than 5 functions per file
    All your header files should be include guarded
    Use system calls only when you need to (why?)

## Description

In this project I'm working to write my own simple UNIX command interpreter. The function
is going to work on interactive mode, and non-interactive mode.

## Synopsis

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

EDIT int printf(const char format, ...);

## Format

  - The format string is a character string, beginning and ending in it's initial state.
  Each conversion specification is introduce by the character '%' and ends with a conversion specifier.

  Example:

      code: 

            int number = 10;
           _printf("%i", number);

      output:   10

- Since the character '%' is use to set the format conversion we can't 
use it in the regular way, instead we use double "%%".

    Example:

    code:   _printf("%%");

    output:   %

Conversion Specifier

A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:

Syntax 	Description
c 	a character
s 	string
i , d 	integer
Compilation

-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Function prototypes

- print_char();

    prints a single character.

- print_str();

    prints two or more of character (sequence).

- print_number();

    print integers.

- print_numbers();

    print_double.

Return value

When success return the number of character printed, excluding the '\0' byte.
When fails return negative value. 

Example

example
References

    Man page
    Markdown Rules
    Markdown Cheatsheet
    Markdown Extended

License

This project is licensed under the Holberton School Software Engineering Program.
