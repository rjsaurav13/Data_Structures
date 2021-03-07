
#include<bits/stdc++>
using namespace std;
int main(){
    int tcase;
    cin>>tcase;
    for(int i=0;i<tcase;i++){
        int num1,num2=0;
        cin>>num1;
        while(num1>0){
            int rem;
            rem=num1%10;
            num2=num2*10+rem;
            num1=num1/10;
        }
        cout<<num2<<"\n";
    }
return 0;
}
