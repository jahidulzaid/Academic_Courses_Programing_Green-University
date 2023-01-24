#include <stdio.h>

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
    pop(stact, top);
    output(stact, top);
    pop(stact, top);
    pop(stact, top);
    pop(stact, top);
}


int output(int stact[], int top){
    for(int i=0;i<10;i++){
        printf("%d ",stact[top--]);
    }
    printf("\n");
}    

int push(int stack[], int top, int elementToPush){
    top++;
    stack[top] = elementToPush;
}
int pop(int stack[], int top){
    return stack[top--];
}
