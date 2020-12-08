#include <stdio.h>

#define LENGTH 3
int data[LENGTH];

int main(int argc, char **argv)
{
    // int num;
    // int *numPtr;
    // int num2;
    // num = 100;
    // numPtr = &num;
    // num2 = *numPtr;
    // printf("num=%d, numPtr=%d, address of num=%d, num2=%d\n", num, numPtr, &num, num2);
    // char str1[] = "Hello World";
    // char *str2 = "Goodbye";
    // printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1);
    // printf("%d %d %s\n", &str2, str2, str2);
    int *pi;
    int **ppi;

    printf("multiple indirection example\n");

    for (int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }

    pi = data;
    ppi = &pi;

    for (int i = 0; i < LENGTH; i++)
    {
        printf("\nLoop[%d] array address is %p\n", i, data);
        printf("Item pointed to by pi is %d\n", *pi);
        printf("Item pointed to by ppi is %p\n", *ppi);
        printf("ITem pointed by double indirection of ppi is %d\n\n", **ppi);
        printf("The address of pi is %p and the value of pi (what it points to) is %p\n\n", &pi, ppi);

        pi++;
    }
    return 0;
}