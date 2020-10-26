#include<stdio.h>
int main(){
  int arr[100],len;
   scanf("%d",&len);
   for(int i =0;i<len;i++){
       scanf("%d",arr[i]);
   }
   
   for(int j=len-1;j>=0;j--){
       printf("%d",arr[j]);
   }
    return 0;
}