#include <stdio.h>
#include <stdlib.h>

typedef struct listitem
{
    struct listitem *previous;
    struct listitem *next;
    int data;
} LISTITEM;

typedef struct listhead
{
    struct listhead *start;
    struct listhead *end;
} LISTHEAD;

int main()
{
    return 0;
}