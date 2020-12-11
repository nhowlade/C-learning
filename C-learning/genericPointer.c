#include <stdio.h>

#define LENGTH 3

int data[LENGTH];
char *words[LENGTH];

int main(int argc, char **argv)
{
    void *gp;

    for (int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }

    words[0] = "one";
    words[1] = "two";
    words[2] = "three";

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%s\n", words[i]);
    }

    gp = data;
    printf("\ndata array address is %p\n", gp);
    printf("item pointed to by gp is %d\n", *(int *)gp);
    gp = (int *)gp + 1;
    printf("item pointed to by gp now is %d\n", *(int *)gp);

    gp = words;
    printf("\nwords array address is %p\n", gp);
    printf("item pointed to by gp is %s\n", *(char **)gp);
    gp = (char **)gp + 1;
    printf("item pointed to by gp now is %s\n", *(char **)gp);

    return 0;
}