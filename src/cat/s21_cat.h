#ifndef S21_CAT_H
#define S21_CAT_H

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct arguments {
  int b, n, s, E, T, v;
} arguments;

arguments argument_parser(int argc, char **argv);
char v_output(char ch);
void outline(arguments *arg, char *line, int n);
void output(arguments *arg, char **argv);

#endif