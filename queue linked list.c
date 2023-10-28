#include <stdio.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==NULL && rear==NULL){
		front=rear=newnode;
	}else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(){
	struct node *temp;
	temp=front;
	
if(front==NULL&&rear==NULL){
	printf("underflow");
}else{
	front=front->next;
	free(temp);
}
}
void display(){
	struct node *temp;
	temp=front;
	while(temp!=NULL){
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}
void peak(){
	printf("front element is %d",front->data);
}
int main(){
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();
display();
peak();

}

