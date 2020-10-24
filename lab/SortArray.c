#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[100],arr[100],temp,len;
scanf("%d",&len);
for(int i =0; i<len;i++){
	scanf("%d",&arr[i]);
}
for(int k =0; k<len;k++){
	for(int j =k+1;j<len;j++){
	if(arr[j]<arr[k]){
	temp= arr[j];
	arr[j]=arr[k];
	arr[k]=temp;

	}
}
}
	for (int l =0 ;l<len;l++){
		printf("%d\t",arr[l]);
	}
printf("\n");
printf("Largest num=%d\nlowest num=%d\n",arr[len-1],arr[0]);
printf("2ndLargest num=%d\n2ndlowest num=%d\n",arr[len-2],arr[1]);

	
return 0;
}

