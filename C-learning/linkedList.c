#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct listitem
{
    struct listitem *next;
    int data;
} LISTITEM;

int main()
{
    LISTITEM *listhead, *temp;
    listhead = NULL;

    for (int i = 0; i < 3; i++)
    {
        temp = malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = listhead;
        listhead = temp;
    }

    temp = listhead;
    while (temp != NULL)
    {

        printf("The value of item is %d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}