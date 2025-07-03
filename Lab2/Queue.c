#include<stdio.h>
#include<stdlib.h>

#define size 100

int front = -1;
int rear = -1;
int queue[size];
void insert(){
    int data;
    if(rear == size-1){
        printf("Queue Overflow\n");
        return;
    }
    printf("Enter the element to insert:");
    scanf("%d",&data);
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear] = data;
    printf("Element %d inserted\n",data);
}

void delete(){
    if(front == -1){
        printf("Queue Underflow\n");
        return;
    }
    else{
        printf("Element %d deleted\n",queue[front]);
        front++;
    }
}

void display(){
    for(int i=front;i<=rear;i++){
        printf("Queue [%d] = %d\n",i,queue[i]);
    }
}

void main(){
    int choice;
    while(1){
    printf("Enter 1 for insert, 2 for delete and 3 for display:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        insert();
        break;

        case 2:
        delete();
        break;

        case 3:
        display();
        }   
    }
}