#include <stdio.h>
#include <stdlib.h>
int q[10],top=-1,tail=-1;
void enq(int elem){
	if(tail==9){
		printf("!!!!!!!!!!!!Queue is full!!!!!!!!!!!!!!!!\n");
		return;
	}
	if(top==-1){
		top++,tail++;
	}
	else{
		tail++;
	}
	q[tail]=elem;
}
void display(){
	int t=top;
	if(top==tail){
		printf("Queue is empty");
		return;
	}
	while(t<=tail){
		printf("%d ",q[t]);
		t++;
	}
}
int deq(){
	if(top==-1){
		printf("!!!!!!!!!!!Queue is empty!!!!!!!!!!!!!!\n");
		exit(0);
	}
	return q[top++];
}
int main(){
	int ch,x,del;
	while(1){
		int ch;
		printf("\nEnter your choice:\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the element to be enqueued:\n");
				scanf("%d",&x);
				enq(x);
				break;
			case 2:
			       del=deq();
			       printf("Deleted element is:%d\n",del);
			       break;
			case 3:
			       display();
			       break;
			case 4:
			       printf("!!!!!!!!!!!!!!!!!You have choosed to exit!!!!\n");
			       exit(0);
			default:
			       printf("Exiting...\n");
			       return 0;
		}

	}
}
