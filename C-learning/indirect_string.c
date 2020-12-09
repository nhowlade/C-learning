#include <stdio.h>

#define LENGTH 3

char *words[LENGTH];

int main(int args, char **argv)
{
    char *pc;
    char **ppc;

    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";

    printf("Now print the chars in each string....\n");

    ppc = words;
    for (int i = 0; i < LENGTH; i++)
    {
        ppc = words + i;
        pc = *ppc;
        while (*pc != 0)
        {
            printf("%c ", *pc);
            pc++;
        }
        printf("\n");
    }
    return 0;
}