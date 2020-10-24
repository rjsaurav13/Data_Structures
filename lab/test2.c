#include<stdio.h>
int main(){
int arr[5] = {1,2,3,4,5};
int len = 5;
for(int i = len-1; i>=0; i--){
	
	printf("%d\t",arr[i]);
}
return 0;
}