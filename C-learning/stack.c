#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    int a;
    double b;
} DATA;

DATA *base;
DATA *end;
DATA *top;

#define DATASIZE 5

int push(DATA *data)
{
    int ok;
    if (top == end)
    {
        ok = 0;
    }
    else
    {
        memcpy(top, data, sizeof(DATA));
        top++;
        ok = 1;
    }
    return ok;
}

DATA *pop()
{
    DATA *data;
    if (top == base)
    {
        data = NULL;
    }
    else
    {
        top = top - 1;
        data = top;
    }
    return data;
}

int main()
{
    return 0;
}