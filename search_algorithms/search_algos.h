#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
#endif
