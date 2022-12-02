#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h> /* For the Write, Fork, Execve, and Isatty */
#include <stdio.h> /* For the Getline */
#include <sys/types.h> /* For the Fork, and Wait */
#include <sys/wait.h> /* For the Wait */
#include <string.h> /* For the Strtok */
#include <stdlib.h> /* For the Exit */

char **tokenization(char *str, char *delim);
int comp_exec(char **tokens, char *ptr, char **env);
char **path(char **env);

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *comparing, char *compare);
void free_array(char **tokens);
int _strncmp(char *comparing, char *compare, size_t n);
char *_strdup(char *s);
char *_strcat(char *dest, char *src);
#endif
