#include<stdio.h>
int n=5;
int queue[5];
int front=-1,rear=-1;
void enqueue(int val){
	if (rear==n-1){
		printf("overflow");
	}else if(front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=val;
	}else{
		rear++;
		queue[rear]=val;
	}
}
void dequeue(){
	if(front==-1 && rear==-1){
		printf("underflow");
	}else if(front==rear){
		front=rear=-1;
	}else{
		printf("\ndeleted element is %d",queue[front]);
		front++;
	}
}
void display(){
	int i;
	for(i=front;i<rear+1;i++){
		printf("\n%d",queue[i]);
	}
}
void peak(){
	printf("Peak element is %d",queue[front]);
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	dequeue();
	dequeue();
	display();
	peak();
	
}
