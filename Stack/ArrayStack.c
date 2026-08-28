#include<stdio.h>
#include<stdlib.h>
int top=-1, size;
void push(int stack_arr[],int);
void pop(int stack_arr[]);
void peek(int stack_arr[]);

int main(){
    int i,choice,val;
    char cont;
    printf("Enter the size of the stack: ");
    scanf("%d",&size);
    int  stack_arr[size];
    do{
    printf("Enter your choice: 1.push 2.pop 3.peek\n");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            
            printf("Enter element: ");
            scanf("%d",&val);
            push(stack_arr,val);
            break;
        case 2:
            pop(stack_arr);
            break;
        case 3:
            peek(stack_arr);
            break;
        default:
            printf("wrong input.\n");

    }
    printf("y/n?\n");
    scanf(" %c",&cont);
    }while(cont=='y');
    
    return 0;
}
void push(int stack_arr[],int data){
    if(top==size-1)
    printf("stack overflow.\n");
    else{
    stack_arr[++top]=data;
    }
}
void pop(int stack_arr[]){
    if (top==-1)
    printf("stack is empty.\n");
    else{
    printf("%d popped.\n",stack_arr[top]);
    top=top-1;
    }
}
void peek(int stack_arr[]){
    if(top==-1)
    printf("stack is empty.\n");
    else{
        printf("%d\n",stack_arr[top]);
    }
}
    