// priority queue
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    int priority;
};
struct node queue[5];
int liveSize = 0;

void sort(struct node queue[]){
    for(int i=0 ; i<5 ; i++){
        for(int j=i+1 ; j<5 ; j++){
            if (queue[i].priority < queue[j].priority){
                struct node temp = queue[i];
                queue[i] = queue[j];
                queue[j] = temp;
            }
        }
    }
}

void Enqueue(int data,int p){
    if(liveSize == 5){
        printf("Queue Overflow!!!");
        return;
    }
    queue[++liveSize].data = data;
    queue[liveSize].priority = p;
    sort(queue);
}

struct node Dequeue(){
    if(liveSize < 0){
        printf("Queue Underflow!!!");
        return;
    }
    return queue[liveSize++];
}


void display(){
    printf("Display Queue : \n");
    for (int i = 0 ; i <= liveSize ; i++){
        if(queue[i].data == NULL && queue[i].priority == NULL){
            break;
        }
        printf("%d\n",queue[i]);   
    }
}

int main(){

    // queue[0].data=136;
    // queue[0].priority=1;

    // queue[1].data=130;
    // queue[1].priority=10;

    // queue[2].data=500;
    // queue[2].priority=2;

    // queue[3].data=100;
    // queue[3].priority=5;

    // queue[4].data=1952;
    // queue[4].priority=1952;


    Enqueue(1,100);
    Enqueue(2,200);
    Enqueue(3,300);
    Enqueue(4,400);
    Enqueue(5,500);

    Dequeue();

    display();

    return 0;
}