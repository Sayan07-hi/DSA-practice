#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int top=-1, size;
void push(int stack_arr[],int);
void pop(int stack_arr[]);
void peek(int stack_arr[]);
void display(int stack_arr[]);

int main(){
    int i,choice,val;
    char cont;
    printf("Enter the size of the stack: ");
    scanf("%d",&size);
    int  stack_arr[size];
    while(true){
    printf("Enter your choice: 1.push 2.pop 3.peek 4.Display 5.Exit\n");
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
        case 4:
            display(stack_arr);
            break;
        case 5:
            return 0;;
        default:
            printf("wrong input.\n");

    }
    }
    
    return 0;
}
void display(int stack_arr[]){
    if(top==-1)
    printf("Stack is empty.\n");
    else
    for(int i=top;i>=0;i--){
        printf("%d\n",stack_arr[i]);
    }

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
    