#include <stdlib.h>

void die() {
    printf("Dying because code didn't work and life is meaningless!!\n");
    exit(-1);
}

void* xmalloc(const size_t size) {
    void* ptr = NULL;
    ptr = malloc(size);
    if (ptr == NULL) {
        die();
    }
    return ptr;
}

void xfree(void** ptr) {
    free(*ptr);
    *ptr = NULL;
}

void *xrealloc(void* ptr, const size_t size) {
    ptr = realloc(ptr, size);
    if (ptr == NULL) {
        die();
    }
    return ptr;
}
