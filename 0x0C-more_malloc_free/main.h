#ifndef MANI_H
#define MANI_H
#include <stddef.h>
#include <stdlib.h>
unsigned int _strlen(char *s);
void dup_mem(void *src, void *dest, unsigned int n);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
