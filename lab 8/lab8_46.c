// 46. Write a menu driven program to implement following operations on the Queue 
// using an Array 
// • ENQUEUE 
// • DEQUEUE 
// • DISPLAY 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int queue[SIZE];
int front = 0;
int rear = -1;

void Enqueue(int data){
    if(rear == SIZE-1){
        printf("Queue Overflow!!!");
        return;
    }
    queue[++rear] = data;
}

int Dequeue(){
    if(front>rear){
        printf("Queue Underflow!!!");
        return;
    }
    return queue[front++];
}

void display(){
    printf("Display Queue : \n");
    for (int i = front ; i <= rear ; i++){
        printf("%d\n",queue[i]);   
    }
}

int main(){

    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);

    Dequeue();

    display();

    return 0;
}