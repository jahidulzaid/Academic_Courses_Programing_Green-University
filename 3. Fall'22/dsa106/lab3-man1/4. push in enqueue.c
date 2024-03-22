#include <stdio.h>
#define SIZE 10

void enQueue(int);
void display();

int items[SIZE], front = -1, rear = -1;

int main() {

  enQueue(1);
  enQueue(2);

  return 0;
}

void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("%d\n", value);
  }
}


void display() {
  if (rear == -1)
    printf("Empty\n");
  else {
    int i;
    printf("Queue elements:");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}