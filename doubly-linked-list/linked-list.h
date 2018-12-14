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
    struct node* previous;
};

struct node* create_head(const int value) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    DIE_IF_NULL(new_node);
    new_node->value = value;
    new_node->next = NULL;
    new_node->previous = NULL;
    return new_node;
}

struct node* add_node(struct node* ptr, const int value) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    DIE_IF_NULL(new_node);
    new_node->value = value;
    new_node->next = NULL;
    new_node->previous = ptr;
    ptr->next = new_node;
    return new_node;
}

void remove_next_node(struct node* ptr) {
    struct node* delNode=ptr->next;
    if(delNode != NULL)
    {
        ptr->next=delNode->next;
        if(delNode->next != NULL)
        {
            delNode->next->previous=ptr;
        }
        free(delNode);
    }
}

struct node* remove_head(struct node* ptr) {
    struct node* delNode=ptr;
    struct node* next=ptr->next;
    if(delNode != NULL)
    {
        delNode->next->previous=NULL;
    }
    free(delNode);
    return next;
}


void print_list(struct node* head) {
	struct node* curr = head;
	while (curr) {
            printf("%5d->", curr->value);
            curr = curr->next;
        }
        printf("\n");
}
void print_list_rev(struct node* tail) {
    struct node* curr = tail;
    while (curr) {
        printf("%5d->", curr->value);
        curr = curr->previous;
    }
    printf("\n");
}


