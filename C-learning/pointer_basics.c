#include <stdio.h>

int main(int argc, char **argv)
{
    // int num;
    // int *numPtr;
    // int num2;
    // num = 100;
    // numPtr = &num;
    // num2 = *numPtr;
    // printf("num=%d, numPtr=%d, address of num=%d, num2=%d\n", num, numPtr, &num, num2);
    char str1[] = "Hello World";
    char *str2 = "Goodbye";
    printf("%s %c %d %d %d\n", str1, str1[0], &str1, &str1[0], str1);
    printf("%d %d %s\n", &str2, str2, str2);
    return 0;
}