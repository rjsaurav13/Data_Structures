#include<iostream>
using namespace std;

int main(){
	int tcase,num,i=0;
	cin >> tcase;
	while(i<tcase){
    cin>>num;
		do{
			if(num%2==0){
				num=num/2;
			}
			else{
				num=3*num+1;
			}
		}while(num!=1);
		if(num==1){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
		i=i+1;
	}
	return 0;
}
