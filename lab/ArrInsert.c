#include<stdio.h>
int main(){
int arr[100],num,pos,len;
printf("enter the length of array");
scanf("%d",&len);
for(int i=0;i<len;i++){
scanf("%d",&arr[i]);
}
printf("Enter the position  and number to inserted: ");
scanf("%d",&pos);
scanf("%d",&num);
len+=1;
for(int j =len-1 ;j>=0;j--){
arr[j+1]=arr[j];
}

arr[pos]=num;
for(int k =0 ;k<len;k++){
printf("%d\t",arr[k]);
}
return 0;
}