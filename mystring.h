#ifndef H_MYSTRING
#define H_MYSTRING
#include <stdlib.h>
size_t strlen2(const char *s);
char *strdup2(const char *s);
char *strtok2(char *s, const char *simv);
char *readline2(const char *s);
void *memcpy2(void *str, const void *s, size_t ob);
#endif
