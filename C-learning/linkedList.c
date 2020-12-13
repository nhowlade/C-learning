#include <stdio.h>
#include <string.h>

typedef struct listitem
{
    struct listitem *next;
    int data;
} LISTITEM;