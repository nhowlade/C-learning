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
        top = top - 1; //  This is decremented here as the memory being pointed to is on a garbage place.
                       //  Hence, decremented value then points to the top of the stack
        data = top;
    }
    return data;
}

int main()
{
    DATA data, *pdata;

    base = (DATA *)malloc(DATASIZE * sizeof(DATA));
    end = base + DATASIZE;
    top = base;

    for (int i = 0;; i++)
    {
        data.a = i;
        data.b = i * 2;
        if (!push(&data))
        {
            break;
        }
    }

    pdata = base + 4;
    do
    {
        pdata = pop();
        if (pdata != NULL)
            printf("data popped is %d: %f\n", pdata->a, pdata->b);

    } while (pdata != NULL);
    return 0;
}