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
    struct listitem *start;
    struct listitem *end;
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

LISTITEM *dequeue()
{
    LISTITEM *temp;
    temp = head.start;
    if (temp == (LISTITEM *)&head)
    {
        temp = NULL;
    }
    else
    {
        head.start = temp->next;
        (head.end)->previous = (LISTITEM *)&head;
    }
    return temp;
}

int length(LISTHEAD *queue)
{
    LISTITEM *temp;
    int length;

    temp = queue->start;
    length = 0;
    do
    {
        if (temp == (LISTITEM *)queue)
        {
            temp = NULL;
            break;
        }
        temp = temp->next;
        length++;
    } while (temp != NULL);
    return length;
}
int main()
{
    return 0;
}