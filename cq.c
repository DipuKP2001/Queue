#include <stdio.h>
#include <stdlib.h>
#define size 10
int arr[size],front=-1,rear=-1;
void enq(int elem){
    if(front==(rear+1)%size){
        printf("Queue is full..\n");
        return;
    }
    if (front==-1){
        rear++;
        front++;
        arr[rear]=elem;
        return;
    }
    rear=(rear+1)%size;
    arr[rear]=elem;
}
int deq(){
    int d;
    if(front==-1){
        printf("Queue is empty!!\n");
        return EOF;
    }
    else if(front == rear){
        d=arr[front];
        front=rear=-1;
    }
    else if(front==(size-1)){
        d=arr[front];
        front=(front+1)%size;
    }
    else{
        d=arr[front];
        front++;
    }
    return d;
}
void display(){
    int f=front;
    if(f==-1){
        printf("Queue is empty!!\n");
        return;
    }
    if(f<=rear){
        while(f<=rear){
            printf("%d ",arr[f]);
            f++;
        }
    }
    printf("\n");
}
int main(){
    int ch,del,x;
    while(1){
        printf("Enter your choice:\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter the element to be queued:\n");
            scanf("%d",&x);
            enq(x);
        }
        else if(ch==2){
            del=deq();
            if(del!=EOF){
                printf("Deleted element is:%d\n",del);
            }
        }
        else if(ch==3){
            display();
        }
        else{
            printf("Exiting....");
            return 0;
        }
    }
}
