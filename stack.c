#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
int k;

int isfull(){
    if(top== 4){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    
    if(top== -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int k){
    if(isfull()){
        printf("The stack is full.\n");

    }
    else{
        printf("The %d element was added.\n", k);
        
        stack[++top]=k;
        
    }
}

int pop(
){
    if(isempty()!=0){
        printf("Stack is empty.\n");
        return 0;
    }
    else{
        printf("%d was removed\n",stack[top]);
        top--;
        return stack[top];        
    }
}

void peek(){
    if(isempty()){
        printf("Stack is empty.\n");
    }
    else{
        printf("%d is the top element.\n", stack[top]);
    }
} 

void traverse(){
    if(isempty()){
        printf("stack is empty.\n");
    }
    else{
        printf("following are the elements in the stack.\n");
        for(int i=0; i<=top;i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int p=100;
    while(p!=0){
    int n,x
    ;
    printf("Choose a number which to any operation on stack:\n1. Push\n2. Pop\n3. Peek\n4. Number of element present\n5. Traverse\n6. Quit\n");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("enter the number you want to push: ");
            scanf("%d", &k);
            push(k);
            break;
        case 2:          
            pop(); 
            break;
        case 3:
            peek();
            break;
        case 4:
            printf("%d\n", top+1);
            break;
        case 5:
            traverse();
            break;
        case 6:
            printf("The thing is finally over.\n");
            exit(0);
            break;            
        default:
            printf("Wrong input.\n");
    }
    }
    return 0;
}