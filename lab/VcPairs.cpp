#include<iostream>
using namespace std;
int main(){
int tcase,len;
cin>>tcase;
string word;
for(int i=0;i<tcase;i++)
{
    cin>>len;
    cin>>word;
    word.resize(len);
    if(word.at(i)=='a'||word.at(i)=='e'||word.at(i)=='i'||word.at(i)=='o'||word.at(i)=='u')

}
return 0;
}
