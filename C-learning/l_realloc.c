#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s;
    int i;

    i = sizeof("hello");
    s = (char *)malloc(i);
    strncpy(s, "hello", i);
    printf("s is %s\n", s);

    realloc(s, 12);
    strncpy(s, "hello", i);
    strcat(s, " world");
    printf("s is now %s\n", s);

    free(s);
    return 0;
}