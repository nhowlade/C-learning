#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAXSTRLEN 100

char *string_function(char *aString)
{
    char *s;
    s = (char *)malloc(MAXSTRLEN);
    s[0] = 0;
    strcat(s, "Hello ");
    strcat(s, aString);
    strcat(s, "\n");
    return s;
}

int main(int argc, char **argv)
{
    printf(string_function("FRED"));
    printf(string_function("Gaussie Fink-Nottle"));
}