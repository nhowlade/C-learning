#include <stdio.h>
#include <stdlib.h>

typedef struct listitem
{
    struct listitem *previous;
    struct listitem *next;
    int data;
} LISTITEM;

int main()
{
    LISTITEM *temp, head;
    head.next = (LISTITEM *)&head;
    head.previous = (LISTITEM *)&head;
    head.data = -1;

    for (int i = 0; i < 3; i++)
    {
        temp = malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = head.next;
        head.next = temp;
        temp->previous = &head;
        temp->next->previous = temp;
    }

    temp = head.next;
    while (temp->next != &head)
    {
        printf("THE VALUE Is %d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}