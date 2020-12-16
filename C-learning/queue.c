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

LISTHEAD head;

void enqueue(LISTITEM *item)
{
    LISTITEM *temp;
    temp = head.end;                // Get the last item into a temp variable
    head.end = item;                // Make the head end to point to the new element
    item->previous = temp;          // Make the "old" item to be the previous link for the new item
    item->next = (LISTHEAD *)&head; // Refer the new item to point to the head
    temp->next = item;              //Make the "old" item to point to the new item
}
int main()
{
    return 0;
}