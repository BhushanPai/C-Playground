#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "malloc.h"

int main() {
    char* buff = NULL;
    // Normal allocation.
    buff = (char *)xmalloc(5);
    strcpy(buff, "this");
    printf("%s\n", buff);
    // Free
    xfree((void **)&buff);

    // Allocate again.
    buff = (char *)xmalloc(10);
    strcpy(buff, "that");
    printf("%s\n", buff);

    buff = (char* )xrealloc(buff, 20);
    strcat(buff, "-that");
    printf("%s\n", buff);
    xfree((void **)&buff);
    return 0;
}
