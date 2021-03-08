#include <bits/stdc++.h>

using namespace std;

int main() {
int tcase;
long long int p=0, num=0;
cin>>tcase;
for(int i=0;i<tcase/2;i++){
    long long int  temp;
    cin>>temp;
    if(temp>=10){
        while (temp>1){
                temp/= 10;
            }
    }
    num=(num*10)+temp;
    }
    for(int i=tcase/2;i<tcase;i++){
        long long int temp;
        cin>>temp;
        if(temp>10){
            num=(num*10)+(temp%10);
        }else{
            num=(num*10)+temp;
        }
    }
   
    if(num%11==0){
        cout<<"OUI";
    }
    else{
        cout<<"NON";
    }

return 0;
}
