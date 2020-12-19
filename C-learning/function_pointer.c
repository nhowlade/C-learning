#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*PFI)(int);

int multi(int k)
{
    return k * k;
}
int main()
{
    int result;
    PFI test;
    test = multi;
    result = test(2);
    printf("%d\n", result);
    return 0;
}