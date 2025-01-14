#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="abcde";
    string goal="cdeab";
     for(int i=0;i<s.length();i++){
            string str=s.substr(i+1)+s[i];
            cout<<str<<endl;
            s=str;
            i=0;
        }
}