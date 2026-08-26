#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}nn;

struct node *insertend(struct node *head,int data){
    struct node *newnode=(struct node*)malloc(sizeof(nn));
    newnode->data=data;
    newnode->next=NULL;
    struct node*ptr=head;
    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
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

// insert before key.
struct node *insertkey(struct node *head, int data, int key) {

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    struct node *ptr = head;
    struct node *prev = NULL;
    // Find the key
    while (ptr != NULL && ptr->data != key) {
        prev = ptr;
        ptr = ptr->next;
    }

    // Key not found
    if (ptr == NULL) {
        printf("Key not found.\n");
        free(newnode);
        return head;
    }

    // Insert before the key
    newnode->next = ptr;

    if (prev == NULL) {
        // Key was the first node
        head = newnode;
    }
    else {
        // Key was somewhere after the first node
        prev->next = newnode;
    }
    return head;
}

int main(){
    int data,key;
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;

    head = insertend(head, 2);
    head = insertend(head, 3);
    head = insertend(head, 4);
    head = insertend(head, 5);
    printnode(head);

    printf("Enter the data to be inserted and the key[element]: ");
    scanf("%d %d",&data,&key);
    head=insertkey(head,data,key);
    printnode(head);
    
    return 0;
}