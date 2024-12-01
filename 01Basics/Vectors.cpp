// Let us study about the vectors now.
// Vectors are simply like array just more flexible,It can dynamically resize itself when elements are added or removed.
// Memory management is handled automatically.

#include<iostream>
#include<vector>
using namespace std;

int main(){


vector<int> v;
// declaring a vector

// operations on vectors

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

// cout<<v[0]<<endl<<v[1]<<endl<<v[2]<<endl<<v[3];

// iterating through vector

for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}

// pop_back() removes element from the last

v.pop_back();


for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}

vector<string> v2;

v2.push_back("john doe");

v2.push_back("florence");

for(int i=0;i<v2.size();i++){
cout<<v2[i]<<endl;
}

int arr1[5];

for(int i=0;i<5;i++){
    cin>>arr1[i];
}

vector<int> v3;

cout<<"enter vector values"<<endl;

for(int i=0;i<10;i++){
    v3.push_back(i);
}

for(int i=0;i<v3.size();i++){
    cout<<v3[i];
}

for(int i=0;i<5;i++){
    cout<<arr1[i]<<endl;
}

}