#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    int arr[x];
    for(int i=0;i<x;i++){
    cin>>arr[i];
    }
    sort(arr, arr + x);
    int sum=arr[x-1]+z;
     if(sum>=y){
        printf("YES\n");

    }
    else{
        printf("NO\n");

    }


}
