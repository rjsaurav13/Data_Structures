#include<iostream>
using namespace std;
int main(){
int tcase,len;
cin>>tcase;

for(int i=0;i<tcase;i++)
{
    string word;
    int count=0;
    cin>>len;
    cin>>word;
    word.resize(len);
    for(int i =0;i<len;i++){
    if((word[i]!='a'&& word[i]!='e'&&word[i]!='i'&&word[i]!='o'&&word[i]!='u')&&(word[i+1]=='a'||word[i+1]=='e'||word[i+1]=='i'||word[i+1]=='o'||word[i+1]=='u'))

    {

        count++;

    }
    }
    cout<<count<<"\n";

}
return 0;
}
