// 47. Write a menu driven program to implement following operations on a circular 
// queue using an Array 
// • Insert 
// • Delete 
// • Display all elements of the queue
// circuler Queue

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = 0;
int rear = -1;
int liveSize = 0;

void Enqueue(int data){

    if(liveSize == SIZE){
        printf("Queue is Overflow!!!\n");
    }
    else if(liveSize == 0){
        front = 0;
        rear = 0;
        queue[rear] = data;
        liveSize++;
    }
    else if(liveSize < (SIZE - 1)){
        queue[++rear] = data;
        liveSize++;
    }
    else if(liveSize == (SIZE - 1)){
        rear = 0;
        queue[rear] = data;
        liveSize++;
    }
}

int Dequeue(){
    
    if(liveSize == 0){
        printf("Queue is Empty!!!\n");
        return -1;
    }
    else if(front < (SIZE - 1)){
        int val = queue[front];
        front++;
        liveSize--;
        return val;
    }
    else if(front == (SIZE - 1)){
        int val = queue[front];
        front = 0;
        liveSize--;
        return val;
    }    
}

void display(){
    if (liveSize == 0) {
        printf("Queue is Empty!!!\n");
        return;
    }
    
    int i = front;
    int count = 0;

    while (count < liveSize) {
        printf("%d ", queue[i]);
        if (i == SIZE - 1)
            i = 0;
        else
            i++;
        count++;
    }

}

int main(){

    Enqueue(7);
    Enqueue(2);
    Enqueue(130);
    Enqueue(100);    

    Dequeue();       
    Dequeue();       
    Dequeue();       

    Enqueue(11);     
    Enqueue(22);     

    display();

    return 0;
}