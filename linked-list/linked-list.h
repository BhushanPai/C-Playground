#include <stdio.h>
#include <stdlib.h>

#define DIE_IF_NULL(ptr)                \
    if (ptr == NULL) {                  \
	printf("OUT OF MEMORY!\n");   \
	exit(-1);                       \
    }                                   \


struct node {
    int value;
    struct node* next;
};

struct node* add_node(struct node* ptr, const int value) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    DIE_IF_NULL(new_node);
    new_node->value = value;
    new_node->next = NULL;
    ptr->next = new_node;
    return new_node;
}

void remove_next_node(struct node* ptr) {
    struct node* delNode=ptr->next;
    if(delNode != NULL)
    {
	ptr->next=delNode->next;
	free(delNode);
    }
}

void print_list(struct node* head) {
	struct node* curr = head;
	while (curr) {
            printf("%5d->", curr->value);
            curr = curr->next;
        }
        printf("\n");
}


