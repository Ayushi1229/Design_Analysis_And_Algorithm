#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int stack[SIZE];
int top=-1;

void push(int value){
    if(top>=SIZE-1){
        printf("Stack is full\n");
    }
    else{
            stack[++top]=value;
            printf("Pushed");
        }
}
void pop(){
    if(top<=-1){
        printf("Stack is underflow");
    }
    else{
        printf("Popped %d",stack[top--]);
    }

}
void peep(){
    if(top<=-1){
        printf("Stack is underflow");
    }
    else{
        printf("Peeped %d",stack[top]);
    }
}
void change(int position, int value){
    if(top - position +1<=-1||position<=0){
        printf("Invalid position");
    }
    else{
        stack[top-position+1]=value;
        printf("Value changed at position %d\n",position);
    }
    
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
    int choice,position,value;
    while(1){
        printf("1.Push\n2.Pop\n3.Peep\n4.Change\n5.Display\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter value to push\n");
                scanf("%d",&value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peep();
                break;

            case 4:
                printf("Enter position and value to change\n");
                scanf("%d %d",&position,&value);
                change(position,value);
                break;

            case 5:
                display();

        }
    }
}