#include<stdio.h>
#include <math.h>
int main(){
int arr[100],len,num=0;
scanf("%d",&len);
for(int i = 0;i<len;i++){
	scanf("%d",&arr[i]);
}
for(int j = len-1; j>=0; j--){
	num=num+arr[j]*pow(10,j);
}
printf("%d",num);
return 0;
}