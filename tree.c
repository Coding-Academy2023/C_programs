#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};
struct node *create(){
struct node * newnode;
int data,choice;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Press 0 to Exit");
printf("\nPress 1 for new node");
printf("ENter the choice");
scanf("%d",&choice);
if (choice==0)
{
	return 0;
}else{
	printf("\nENter the data: ");
	scanf("%d",&data);
	newnode->data=data;
	printf("\nEnter the left child");
	newnode->left=create();
	printf("\nENter the right child");
	newnode->right=create();
	return newnode;
}


}
void main(){
	struct node*root;
	root=create();
}

