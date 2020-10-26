#include<stdio.h>
#include <stdlib.h>
int max=5;
int top=-1;
void push(int arr[],int num){
	if(top==max){
		printf("Stack full \n");
	}else{
	top++;
	arr[top]=num;
	}	
}
void pop(int arr[]){
	if(top==-1){
		printf("Stack Empty \n");
	}else{
	int t;
	t= arr[top];
	top--;
	}
}
void display(int arr[]){
	
	for(int j =top; j>=0;j--){
		printf("%d ",arr[j]);
	}
	printf("\n");
}
int main(){
	int val,arr[max],ch;
do{	
	printf("Enter the choice:\n1)-PUSH\n2)-POP\n3)-DISPLAY\n4)-EXIT\n");
	scanf("%d",&ch);
	switch(ch){
	case 1:	
	printf("\nEnter the value to enter:\n");
	scanf("%d",&val);
	push(arr,val);
	break;
	case 2:
	pop(arr);
	break;
	case 3:
	display(arr);
	break;
	case 4:
	printf("\nEXIT...........");
	exit(0);
	default:
	printf("Invalid choice\n");
	}
}while(ch!=4);	
return 0;
}