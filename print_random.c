//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char ranchar();
char* rand_string_alloc(size_t size);
char* rand_string(char *s, size_t size);

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

char* rand_string(char *s, size_t size)
{
    while (size-- > 0) {
        *s++ = ranchar();
    }
    *s = '\0';
    return s;
}

int main()
{
    srand(time(NULL));

    char *s = rand_string_alloc(7);
    printf("%s\n", s);
    free(s);
    return 0;
}