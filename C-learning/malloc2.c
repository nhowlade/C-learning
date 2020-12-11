#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main(int argc, char **argv)
{
    char *s;
    int charSize;
    charSize = sizeof("hello");
    printf("size of hello is %d\n", charSize);

    s = (char *)malloc(charSize);
    if (s == NULL)
    {
        printf("malloc failed\n");
        exit(0);
    }

    strncpy(s, "hello", charSize);
    printf("s is %s\n", s);
    s[0] = 'c';
    printf("s is now %s\n", s);
    return 0;
}