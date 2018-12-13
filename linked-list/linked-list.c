#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main() {
    struct node* dummy;
    struct node* curr;
    int num = 0;
    dummy = (struct node*) malloc(sizeof(struct node));
    curr = dummy;
    for (num = 0; num < 10; ++num) {
        curr = add_node(curr, num);
    }
    print_list(dummy->next);
    return 0;
}
