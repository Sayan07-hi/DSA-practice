#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* addend(struct node *head, int data) {
    struct node *ptr;
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    ptr = head;
    while(ptr -> next != NULL) {
        ptr = ptr -> next;
    }
    ptr -> next = new_node;
    return head;
}

void printnode(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;

    head = addend(head, 2);
    head = addend(head, 3);
    head = addend(head, 4);
    head = addend(head, 5);
    printnode(head);

    return 0;
}