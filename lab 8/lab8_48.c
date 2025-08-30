// 48. Write a menu driven program to implement following operations on the 
// Doubled Ended Queue using an Array 
// • Insert at front end, Insert at rear end 
// • Delete from front end, Delete from rear end 
// • Display all elements of the queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int queue[SIZE];
int front = 0;
int rear = -1;


void Enqueue_rear(int data){
    if(rear == SIZE-1){
        printf("Queue Overflow!!!");
        return;
    }
    queue[++rear] = data;
}

int Dequeue_front(){
    if(front>rear){
        printf("Queue Underflow!!!");
        return;
    }
    return queue[front++];
}


void Enqueue_front(int data){
    if(front==1){
        printf("Queue Overflow!!!\n");
        return;
    }
    // else if(front==0){
    //     printf("Queue Underflow!!!");
    //     return;
    // }
    queue[--front] = data;
}

void Dequeue_rear(){
    if(rear == 0){
        printf("Queue Overflow!!!");
        return;
    }
    int temp = queue[rear];
    if(rear==front){
        front=0;
        rear=0;
    }
    else{
        rear--;
    }
    return temp;
}

void display(){
    printf("Display Queue : \n");
    for (int i = front ; i <= rear ; i++){
        printf("%d\n",queue[i]);   
    }
}

int main(){

    Enqueue_rear(1);
    Enqueue_rear(2);
    Enqueue_rear(3);
    Enqueue_rear(4);
    Enqueue_rear(5);
    Enqueue_rear(6);
    Enqueue_rear(7);

    Enqueue_front(130);
    Dequeue_rear();
    Dequeue_front();
    
    display();

    return 0;
}