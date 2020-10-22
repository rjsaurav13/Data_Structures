#include<stdio.h>
#include<stdlib.h>
void thanoi(int num,char start,char temp,char end)
{
	if(num==0)
	return;
	thanoi(num-1,start,end,temp);
	printf("disk moved %d from %c to %c\n",num,start,end);
	thanoi(num-1,temp,start,end);
	
}
int main(){
int num;
printf("enter the disc number: ");
scanf("%d",&num);
thanoi(num,'A','B','C');
return 0;
}	