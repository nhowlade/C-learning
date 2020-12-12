#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int c;
    double b;
    long long int d;
} MYSTRUCT;

#define COUNT 4

int main()
{
    MYSTRUCT *p, *q;
    void *v;
    printf("The size of the struct is %d\n", sizeof(MYSTRUCT));
    p = (MYSTRUCT *)calloc(COUNT, sizeof(MYSTRUCT));
    for (int i = 0; i < COUNT; i++)
    {
        p[i].a = 1;
        p[i].b = 1000000000.0 + i;
        p[i].c = i * 20;
        p[i].d = 42546 + i;
    }

    q = p;
    q = p + 3;
}