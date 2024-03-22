#include <stdio.h>
#define SIZE 10

int output(int stact[], int top);
int push(int stack[], int top, int elementToPush);
int pop(int stack[], int top);

int main(){
    int stact[10];
    int top = -1;
    for(int i=0;i<10;i++){
        stact[++top] = i;
    }

    output(stact, top);
    push(stact, top, 10);
    output(stact, top);
}


int output(int stact[], int top){
    for(int i=0;i<10;i++){
        printf("%d ",stact[top--]);
    }
    printf("\n");
}    

int push(int stack[], int top, int elementToPush){
    if (top > SIZE-1){
        printf("Stack is full");
        return;
    }
    else{
        top++;
        stack[top] = elementToPush;
        return top;
    }
    
    
}
int pop(int stack[], int top){
    if (top < 0){
        printf("Stack is empty");
        return -1;
    }
    else{
        return stack[top--];
        return top;
    }
}
