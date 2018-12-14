#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main() {
    struct node* dummy;
    struct node* curr;
    struct node* end;
    int num = 0;
    dummy = create_head(1);
    curr = dummy;
    for (num = 2; num < 12; ++num) {
        curr = add_node(curr, num);
    }
    end=curr;
    print_list(dummy);
    print_list_rev(end);
    curr = dummy;
    for (num = 0; num < 5; ++num) {
        curr=curr->next;
    }
    remove_next_node(curr);
    print_list(dummy);
    print_list_rev(end);
    
    curr=dummy;
    dummy=remove_head(dummy);
    
    print_list(dummy);
    print_list_rev(end);
    
    return 0;
}
