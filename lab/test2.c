#include<iostream>

int main(){
	int tcase,num;
	scanf("%d",&tcase);
	for(int i =1; i<=tcase;i++){
    scanf("%d",&num);
		while(num!=1){
			if(num%2==0){
				num=num/2;
			}
			else{
				num=3*num+1;
			}
		}
		if(num==1){
			printf("YES");
		}else{
			printf("NO");
		}

	}
	return 0;
}
