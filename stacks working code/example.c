#include<stdio.h>
#include<stdbool.h>
#define max 10

int stack[max];
int top=-1;

bool isFull(){
    if(top>=max-1){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

int push(int new){
    if(isFull()){
        printf("stack is full \n");
        return 0;
    }
    top=top+1;
    stack[top]=new;
}

int pop(){
    if(isEmpty()){
        printf("stack underflow ");
        return -1;
    }
    int element=stack[top];
    printf("popped element : %d\n",element);
    top=top-1;
    return element;
}

int main(){
    int n;
    for(int i=0;i<max;i++){
        printf("enter an element \n");
        scanf("%d",&n);
        push(n);
    }
    for(int i=0;i<max;i++){
        pop();
    }
}
