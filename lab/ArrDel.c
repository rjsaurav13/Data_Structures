#include<stdio.h>
int main(){
int arr[100],num,pos,len;
printf("enter the length of array");
scanf("%d",&len);
for(int i=0;i<len;i++){
scanf("%d",&arr[i]);
}
printf("Enter the position  and number to delete: ");
scanf("%d",&pos);

for(int j =pos ;j>=len-1;j--){
arr[j]=arr[j+1];

}
len--;
for(int k =0 ;k<len;k++){
printf("%d\t",arr[k]);
}
return 0;
}