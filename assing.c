#include<stdio.h>
int fun(int n)
{
if(n<=0)
return -1;
return 3+n+fun(n-2);
};
int main(){
	 int num,n = 11;
	 num=fun(11);
	 printf("%d",num);
	 return 0;
}