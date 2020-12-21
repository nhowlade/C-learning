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
LISTHEAD deep_cpy;
LISTHEAD shallow_cpy;

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

LISTITEM *remove_at(LISTHEAD *queue, int position)
{
    LISTITEM *temp;
    int i = 0;
    if (position < 0)
    {
        return NULL;
    }
    temp = queue->start;
    do
    {
        if (temp == (LISTITEM *)queue)
        {
            temp = NULL;
            break;
        }
        if (i == position)
        {
            temp->previous->next = temp->next;
            temp->next->previous = temp->previous;
            break;
        }
        temp = temp->next;
        i++;

    } while (temp != NULL);
    return temp;
}

LISTITEM *add_after(LISTHEAD *queue, int position, LISTITEM *item)
{
    LISTITEM *temp;
    int i = 0;
    if (position < 0)
    {
        return NULL;
    }
    temp = queue->start;
    do
    {
        if (temp == (LISTITEM *)queue)
        {
            temp = NULL;
            break;
        }
        if (i == position)
        {
            item->next = temp->next;
            item->previous = temp;
            temp->next = item;
            temp->previous = item;
            break;
        }
        temp = temp->next;
        i++;
    } while (temp != NULL);
    return temp;
}
int main()
{
    LISTITEM *temp, *temp1;
    temp = head.start; //Shallow copy
    do
    {
        temp1 = (LISTITEM *)malloc(sizeof(LISTITEM));
        memcpy(temp1, temp, sizeof(LISTITEM));
        enqueue(&shallow_cpy, temp1);
        temp = temp->next;
    } while (temp->next != head.start);
    return 0;
}