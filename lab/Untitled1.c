
#include<stdio.h>
int main (){
int arr[100],num,top=-1,len,temp;
printf("Please enter the length of array:\n");
scanf("%d",&len);
printf("Press \n 1)-PUSH\n 2)-POP\n 3)-PRINT\n 4)-EXIT\n");
scanf("%d",&num);
do{
if (num==1){
    printf("Enter the value for insertion");
    scanf("%d",&temp);
    top+=1;
    arr[top]=temp;
}
else if(num=2){
    print("Top element is popped");
    top--;
}

}while(num!=4);
return 0;
}
