#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}nn;

struct node *addbeg(struct node *head,int data){
    struct node *ptr;
    struct node *newnode=(struct node*)malloc(sizeof(nn));
    newnode->data = data;
    newnode->next = NULL;
    ptr=head;
    if(head==NULL)
    head=newnode;
    else{
        newnode->next=head;
        head=newnode;
    }
    return head;
}

void display(struct node *head){
    struct node *ptr=head;
    while(ptr != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL. \n");
}

int main()
{
    struct node *head=(struct node*)malloc(sizeof(nn));
    head->data=1;
    head->next=NULL;

    head = addbeg(head, 2);
    head = addbeg(head, 3);
    head = addbeg(head, 4);
    head = addbeg(head, 5);
    display(head);

    return 0;
}