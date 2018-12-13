#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[] = "somestring";
    char name[5];
    strcpy(name, "bpai");
    char* copy;
    copy = &name[1];
    printf("%s\n", copy);
    char* buffer;
    buffer = malloc(100);
    if (buffer == NULL) {
        printf("Cannot allocate memory.\n");
    } else {
        strcpy(buffer, "this is it.");
        printf("%s\n", buffer);
    }
    free(buffer);
    buffer = calloc(100, sizeof(char));
    return 0;
}
